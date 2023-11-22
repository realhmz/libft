NAME = libft.a
CFLAGS = -Werror -Wextra -Wall -std=c99

CC = cc

INC = libft.h

SRCS =	ft_strlen.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_atoi.c\
		ft_isprint.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isalpha.c\
		ft_isalnum.c\
		ft_strdup.c\
		ft_strcmp.c\
		ft_strncmp.c\
		ft_memset.c\
		ft_bzero.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_memcmp.c\
		ft_memmove.c\
		ft_memcpy.c\
		ft_memchr.c\
		ft_calloc.c\
		ft_strjoin.c\
		ft_substr.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_memrchr.c\
		ft_strnstr.c\
		ft_strtrim.c\
		ft_putchar_fd.c\
		ft_split.c\
		ft_itoa.c\
		ft_putstr_fd.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putnbr_fd.c\
		ft_putendl_fd.c\
		
SRCSB = ft_lstadd_back.c\
		ft_lstadd_front.c\
		ft_lstclear.c\
		ft_lstdelone.c\
		ft_lstlast.c\
		ft_lstnew.c\
		ft_lstsize.c\



OBJSB = $(SRCSB:%.c=%.o)

OBJS = $(SRCS:%.c=%.o)
%.o : %.c $(INC)
		$(CC) -c $(CFLAGS) $< -o $@

all : $(NAME)

bonus : $(OBJSB) all
		ar rc $(NAME) $(OBJSB) $(OBJS)

$(NAME) : $(OBJS)
		ar rc $(NAME) $(OBJS)

%.o : %.c $(INC)
		$(CC) -c $(CFLAGS) $< -o $@

clean :
		rm -rf $(OBJS) $(OBJSB)

fclean : clean 
		rm -rf $(NAME)
re : fclean all

.PHONY: all clean fclean re 