CCF = gcc -Wall -Wextra -Werror -c 
NAME = libft.a

SRC = ft_strtrim.c ft_strjoin.c ft_substr.c ft_memmove.c ft_strdup.c ft_calloc.c ft_atoi.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_memchr.c ft_memcmp.c ft_memccpy.c ft_memcpy.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_isprint.c ft_isalnum.c ft_isascii.c ft_memset.c ft_strlen.c ft_tolower.c ft_toupper.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_itoa.c ft_putnbr_fd.c ft_strmapi.c ft_split.c
OBJ = $(SRC:.c=.o)

BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BOBJ = $(BSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ) 

%.o: %.c
	$(CCF) $< -o $@ 

bonus: $(NAME) $(BOBJ)
	ar -r $(NAME) $(BOBJ)

clean: 
	rm -rf *.o

fclean: clean 
	rm $(NAME)

re: clean all

.PHONY: bonus clean fclean re all
