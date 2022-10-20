NAME = libft.a

SRC =   ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_memset.c ft_bzero.c ft_isascii.c ft_strlen.c ft_toupper.c ft_tolower.c\
		ft_isprint.c ft_memcpy.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c\
		ft_strmapi.c\
		ft_memcmp.c ft_memchr.c\
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_substr.c ft_strtrim.c ft_strjoin.c\
		ft_strdup.c ft_calloc.c\

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstdelone.c ft_lstsize.c ft_lstlast.c ft_lstiter.c\

OBJECT = $(SRC:.c=.o)

BONUS_OBJECT = $(BONUS_SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJECT) libft.h
	ar -rc $(NAME) $(OBJECT)

%.o: %.c libft.h
	cc $(CFLAGS) -c $< -o $@

bonus : $(OBJECT) $(BONUS_OBJECT)
	ar rc $(NAME) $(OBJECT) $(BONUS_OBJECT)

clean :
	rm -f $(OBJECT) $(BONUS_OBJECT)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean fclean all re bonus