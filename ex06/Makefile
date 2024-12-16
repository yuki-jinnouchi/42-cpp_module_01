# # Memo
# VAR = val: Normal setting - values within are recursively expand when var used.
# VAR := val: Setting of var with simple expansion of values inside - values are expanded at decl time.
# VAR ?= val: Set var only if it doesn't have a value.
# VAR += val: Append val to existing value (or set if var didn't exist).
#
# $@: name of the target file (one before colon)
# $<: name of first prerequisite file (first one after colon)
# $^: names of all prerequisite files (space separated)
# $*: stem (bit which matches the % wildcard in rule definition)

#-----------------------------------------------
# Output File
OUTPUT_DIR = 	.
NAME = 			$(OUTPUT_DIR)/harlFilter

# Directories
INCL_DIR =		.
SRCS_DIR =		.
OBJS_DIR =		objs

# Files
INCL	=	$(wildcard $(INCL_DIR)/*.hpp)
SRCS	=	$(wildcard $(SRCS_DIR)/*.cpp)
OBJS 	=	$(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.o,$(SRCS))

# Compiler & Flags
CXX		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
UI_FLAGS :=	-I $(INCL_DIR)

#-----------------------------------------------
# Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#-----------------------------------------------
# Rules
all:	$(NAME)

# Link Targets
$(NAME): $(OBJS)
	@printf "\r$(GREEN)[%2d/%2d]$(DEF_COLOR) All files compiled! Linking $(CYAN)$(NAME)$(DEF_COLOR)\033[K" \
		"$$(find $(SRCS) -type f | wc -l)" "$$(find $(SRCS) -type f | wc -l)"
	@$(CXX) $(UI_FLAGS) $^ -o $@
	@echo "\n$(GREEN)<-------- $(NAME) linked. -------------------------->$(DEF_COLOR)"
	@chmod 777 $(NAME)
	@echo "$(GREEN)<-------- $(NAME) permission changed. -------------->$(DEF_COLOR)"
	@echo "$(CYAN)######### $(NAME) compile finished! #################$(DEF_COLOR)"

# Compile Targets
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp | $(OBJS_DIR)
	@printf "\r$(GREEN)[%2d/%2d]$(DEF_COLOR) Compiling objects: $(CYAN)%s$(DEF_COLOR)\033[K" \
		"$$(find $(OBJS_DIR) -type f | wc -l)" "$$(find $(SRCS) -type f | wc -l)" "$<"
	@$(CXX) $(CFLAGS) $(UI_FLAGS) -c $< -o $@

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

# Clean Targets
clean:
	@rm -rf $(OBJS)
	@rm -rfd $(OBJS_DIR)
	@echo "$(GRAY)<-------- $(NAME) object files cleaned. ------------>$(DEF_COLOR)"

fclean:	clean
	@rm -rf $(NAME)
	@echo "$(GRAY)<-------- $(NAME) executable files cleaned. -------->$(DEF_COLOR)"

re:		fclean all

update:	fclean
	make

# Phony
.PHONY = all clean fclean re update
