#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 100

// 哈希表节点
typedef struct {
    char* key;
    int value;
} HashNode;

// 哈希表
HashNode* hash_table[TABLE_SIZE];

// 哈希函数：除留余数法
int hash_function(const char* key) {
    unsigned long hash_value = 0;
    int key_length = strlen(key);

    // 计算加权和
    for (int i = 0; i < key_length; i++) {
        hash_value = hash_value * 31 + key[i]; // 使用31作为乘法因子，也可以选择其他质数
    }

    // 取模映射到哈希表大小范围内
    return hash_value % TABLE_SIZE;
}

// 插入键值对到哈希表
void insert(const char* key, int value) {
    int index = hash_function(key);

    // 创建新节点
    HashNode* new_node = (HashNode*)malloc(sizeof(HashNode));
    new_node->key = strdup(key); // 复制字符串作为键
    new_node->value = value;

    // 将节点插入哈希表
    hash_table[index] = new_node;
}

// 查找键对应的值
int get(const char* key) {
    int index = hash_function(key);
    HashNode* node = hash_table[index];

    // 在哈希表中查找键
    if (node != NULL && strcmp(node->key, key) == 0) {
        return node->value;
    } else {
        return -1; // 未找到
    }
}

int main() {
    // 测试数据
    insert("John", 25);
    insert("Emily", 30);
    insert("Tom", 35);

    // 查找测试
    printf("John's age: %d\n", get("John"));   // 输出：John's age: 25
    printf("Emily's age: %d\n", get("Emily")); // 输出：Emily's age: 30
    printf("Tom's age: %d\n", get("Tom"));     // 输出：Tom's age: 35
    printf("Mike's age: %d\n", get("Mike"));   // 输出：Mike's age: -1 (未找到)

    return 0;
}
