#include "mlx/mlx.h"
#include "stdio.h"

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

int	key_hook(int keystroke, t_vars *game)
{
	printf("You pressed %d\n", keystroke);
	return (0);
}

int main()
{
	t_vars game;
	game.mlx = mlx_init();
	game.win = mlx_new_window(game.mlx, 600, 500, "First window");
	mlx_key_hook(game.win, key_hook, &game);
	mlx_loop(game.mlx);
}