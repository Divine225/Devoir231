test_matrice = Devoir231

CC = gcc
CFLAGS = -Wall -Wextra -g

SRCS = main.c \
       trie.c \
       multiplication.c \
       calcule_median.c \
       inversion.c \
       addition_matrice.c \
       multiplication_mat.c \
       produit_vectorielle.c \
       prod_mat_vect.c \
       recherche_sequentielle.c \


OBJS = $(SRCS:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS) $(EXEC)

rebuild: clean all

.PHONY: all clean rebuild
