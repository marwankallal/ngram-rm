typedef struct node node;

struct node{
    node **children;
    char *value;
    int child_cnt;
    int depth;
    char in_edge;
};

void preprocess(node *root, char **ngrams, unsigned int ngram_cnt);
char *ngram_rm(node *root, char* str);
short has_child(node *currnode, char childchar);
