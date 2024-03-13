define METHODS
	map_create			\
	map_print			\
	map_get_width		\
	map_get_height		\
	map_get_buff		\
	map_get_view		\
	map_load_from_path	\
	map_save_to_path	\
	map_read_at			\
	map_write_at		\
	map_vread_at		\
	map_vwrite_at
endef

OBJECTS := $(METHODS:%=%.o)

CC 		:= cc
CFLAGS	:= -Wall -Werror -Wextra

$(NAME) := libmap.a

$(NAME) : $(NAME)($(OBJECTS))

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
