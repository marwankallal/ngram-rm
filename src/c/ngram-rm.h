typedef struct edge edge;
typedef struct node node;

struct edge{
    char *value;
    node *child;
};

struct node{
    edge *children;
    char *value;
};

void build_ngrams(node *root, char **ngrams);
char *ngram_rm(node *root, char* str);
