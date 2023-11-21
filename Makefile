SRCS    =   ft_print_di.c ft_print_u.c ft_printf.c ft_print_p.c ft_print_s.c ft_print_xx.c

OBJS	=	$(SRCS:.c=.o)

CC	=	cc

RM	=	rm -rf

CFLAGS	=	-Wall -Wextra -Werror -I.

NAME	=	libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean:		clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re bonus
