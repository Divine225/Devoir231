#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Fonction pour insérer un élément dans la liste triée
Node* insererTrie(Node* head, int val) {
    Node* nouveau = (Node*)malloc(sizeof(Node));
    nouveau->data = val;
    nouveau->next = NULL;

    if (head == NULL || val < head->data) {
        nouveau->next = head;
        return nouveau;
    }

    Node* courant = head;
    while (courant->next != NULL && courant->next->data < val) {
        courant = courant->next;
    }
    nouveau->next = courant->next;
    courant->next = nouveau;
    return head;
}

// Fonction pour afficher la liste
void afficherListe(Node* head) {
    Node* courant = head;
    while (courant != NULL) {
        printf("%d -> ", courant->data);
        courant = courant->next;
    }
    printf("NULL\n");
}
