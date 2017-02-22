NAME	=	libftprintf.a
CFLAGS	=	-Wall -Werror -Wextra -Ilibft/ -Iinc/
SRCDIR	=	src
OBJDIR	=	obj
_SRC	=	ft_skip_nbr.c \
			ft_join_gs.c \
			ft_copy.c \
			ft_process_width.c \
			ft_dioux_prec.c \
			ft_uoxlen.c \
			ft_fwstr.c \
			ft_fwchar.c \
			ft_fstr.c \
			ft_fchar.c \
			ft_fhex.c \
			ft_fint.c \
			ft_fou.c \
			ft_get_len.c \
			ft_get_prec.c \
			ft_get_width.c \
			ft_get_flags.c \
			ft_find_fspec.c \
			ft_format.c \
			ft_printf.c
SRC		=	$(addprefix $(SRCDIR)/, $(_SRC))
_OBJ	=	$(_SRC:.c=.o)
OBJ		=	$(addprefix $(OBJDIR)/, $(_OBJ))
LIBFT	=	./libft/libft.a
RM		=	rm -f

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	gcc $(CFLAGS) -c -o $@ $<

$(NAME): $(OBJ)
	make -C ./libft
	libtool -static -o $(NAME) $(LIBFT) $?

clean:
	$(RM) $(OBJ)
	make clean -C ./libft

fclean: clean
	$(RM) $(NAME)
	make fclean -C ./libft

re: fclean all