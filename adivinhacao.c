#include <stdio.h>
#include <stdlib.h>

// '#' é uma diretiva
// define = constante (sempre declarada em letras maiusculas separadas por _)


int main() {

	// imprime cabeçalho do jogo
	

printf("        ,     \\    /      ,                \n");
printf("       / \\    )\\__/(     / \\             \n");
printf("      /   \\  (_\\  /_)   /   \\            \n");
printf(" ____/_____\\__\\@  @/___/_____\\____       \n");
printf("|             |\\../|              |        \n");
printf("|              \\VV/               |        \n");
printf("|     Bem vindo ao nosso jogo     |	        \n");
printf("|         de adivinhacao          |	        \n");
printf("|_________________________________|	        \n");
printf("|    /\\ /      \\       \\ /\\    |        \n");
printf("|  /   V        ))       V   \\  |          \n");
printf(" |/     `       //        '     \\|         \n");
printf(" `              V                '          \n");
printf("\n\n");
		

	int segundos = time(0);
	srand(segundos);

	int numeroaleatorio = rand();
	int numerosecreto = numeroaleatorio % 100;

	int chute;
	double pontos = 1000;
	int tentativas = 1;
	int numerodetentativas;
	int nivel;

	printf("Escolha o nivel de dificuldade:\n\n (1)Facil (2)Medio (3)Dificil\n");
	scanf("%d", &nivel);

	switch (nivel) {
		case 1:
			numerodetentativas = 20;
			break;
		case 2:
			numerodetentativas = 12;
			break;
		default:
			numerodetentativas = 6;
			break;
	}
	

for (int i = 1; i<= numerodetentativas; i++) {

	printf("Tentativa %d\n", tentativas);
	printf("Qual o seu chute?\n");
	scanf("%d", &chute);
	double pontosperdidos = abs(chute - numerosecreto) / (double)2;;

	if (chute < 0) {
		printf("Voce nao pode chutar numeros negativos.\n");
		tentativas--;
		continue;
	}

	printf("Seu chute foi %d\n", chute);

	if (chute < numerosecreto)	{
		printf("Seu chute e menor que o numero secreto.\n");
		
	} else if (chute > numerosecreto) {
		printf("Seu chute e maior que o numero secreto.\n");
		
	} else {
		
		break;
	}


pontos = pontos - pontosperdidos;

tentativas++;
}

if (chute == numerosecreto) {

printf("                 *****************                         \n");
printf("               ******               ******                 \n");
printf("           ****                           ****             \n");
printf("        ****                                 ***           \n");
printf("      ***                                       ***        \n");
printf("     **           ***               ***           **       \n");
printf("   **           *******           *******          ***     \n");
printf("  **            *******           *******            **    \n");
printf(" **             *******           *******             **   \n");
printf(" **               ***               ***               **   \n");
printf("**                                                     **  \n");
printf("**       *                                     *       **  \n");
printf("**      **                                     **      **  \n");
printf(" **   ****                                     ****   **   \n");
printf(" **      **                                   **      **   \n");
printf("  **       ***                             ***       **    \n");
printf("   ***       ****                       ****       ***     \n");
printf("     **         ******             ******         **       \n");
printf("      ***            ***************            ***        \n");
printf("        ****                                 ****          \n");
printf("           ****                           ****             \n");
printf("               ******               ******                 \n");
printf("                    *****************                      \n");
printf("\n\n");

	printf ("Parabens! Voce acertou. %d era o numero secreto.\n", chute);
	printf("Voce acertou na tentativa %d!\n", tentativas);
} else {

printf("                           ,--.         \n");
printf("                          {    }        \n");
printf("                          K,   }        \n");
printf("                         /  `Y`         \n");
printf("                    _   /   /           \n");
printf("                   {_'-K.__/            \n");
printf("                     `/-.__L._          \n");
printf("                     /  ' /`\\_}        \n");
printf("                    /  ' /              \n");
printf("            ____   /  ' /               \n");
printf("     ,-'~~~~    ~~/  ' /_               \n");
printf("   ,'             ``~~~//',             \n");
printf("  (                     /  Y            \n");
printf(" {                      // I            \n");
printf("{      -                 /  `.          \n");
printf("|       ',                /  )          \n");
printf("|        |   ,..__      __. Y           \n");
printf("|    .,_./  Y ' / ^Y   J   )|           \n");
printf("\\           |' /   |   |   ||          \n");
printf(" \\          L_/    . _ (_,.'(          \n");
printf("  \\,   ,      ^^""' / |      )         \n");
printf("    \\_  \\          /,L]     /         \n");
printf("      '-_`-,       ` `   ./`            \n");
printf("         `-(_            )              \n");
printf("             ^^\\..___,.--`             \n");
printf("\n\n");
	printf ("Nao foi dessa vez. %d era o numero secreto, jogue de novo!\n", numerosecreto);
}

printf("Voce fez %.1f pontos!\n", pontos);
printf("Fim de jogo!\n");

}
