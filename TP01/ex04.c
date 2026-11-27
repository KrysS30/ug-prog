#include <stdio.h>
double	racine_carree(int n){
	double	racine;
	int		i;
    racine = n;
	i = 0;
	while (i < 30){
		racine = (racine + n / racine) / 2;
		i = i + 1;	}
	return (racine);
}int	main(void){
	int	a;
	int	b;
	int	c;
	int	delta;
    a = 1;
	b = -3;
	c = 2;
	delta = b * b - 4 * a * c;
	printf("Delta = %d\n", delta);
	if (delta > 0){printf("Il existe 2 solutions\n");printf("x1 = %f\n", (-b - racine_carree(delta)) / (2.0 * a));printf("x2 = %f\n", (-b + racine_carree(delta)) / (2.0 * a));	}	
    else if (delta == 0){printf("Il existe 1 solution\n");printf("x = %f\n", -b / (2.0 * a));}else
		printf("Il n'existe aucune solution\n");
	return (0);
}