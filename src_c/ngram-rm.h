typedef struct node node;

struct node{
    node **children;
    char *value;
    int child_cnt;
    int depth;
};

void build_ngrams(node *root, char **ngrams);
char *ngram_rm(node *root, char* str);
