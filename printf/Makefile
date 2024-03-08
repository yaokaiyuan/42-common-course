# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykai-yua <ykai-yua@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 11:32:59 by ykai-yua          #+#    #+#              #
#    Updated: 2024/03/08 08:52:59 by ykai-yua         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c \
	   ft_print_ptr.c \
	   ft_print_unsigned.c \
	   ft_print_hex.c \
	   ft_print_csnp.c

OBJS = $(SRCS:.c=.o)
OBJS += $(LIBFT_DIR)/ft_putchar_fd.o $(LIBFT_DIR)/ft_putstr_fd.o $(LIBFT_DIR)/ft_itoa.o $(LIBFT_DIR)/ft_strlcpy.o $(LIBFT_DIR)/ft_strlen.o

RM = rm -f
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror
INCS = .

LIBFT_DIR = libft
LIBFT_MAKEFILE = Makefile
LIBFT = libft.a

.c.o:
	${CC} ${FLAGS} -c $< -o $@ -I${INCS}

$(NAME): $(LIBFT) $(OBJS)
	$(LIBC) $(NAME) $(OBJS) 

$(LIBFT): 
	$(MAKE) -C $(LIBFT_DIR)

all: $(NAME)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
