CCF = gcc -Wall -Wextra -Werror -g
NAME = libft.a

INC = -Iinclude/
SRC = $(wildcard src/*.c)
OBJ = $(subst src/,obj/,$(SRC:.c=.o))
HDR = include/libft.h
OBJDIR = obj/
VPATH = src

all: $(NAME)

$(NAME): $(OBJDIR) $(OBJ) $(HDR) 
	ar rc $(NAME) $(OBJ) 

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)%.o: %.c
	$(CCF) $(INC) -c $< -o $@ 

clean: 
	rm -rf $(OBJDIR)

fclean: clean 
	rm -f $(NAME)

re: fclean all

.PHONY: bonus clean fclean re all

