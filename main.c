#include <ctype.h>
#include <stdio.h>
#include <string.h>

int winner(int a, char tabela[5][5]) {
  for (int i = 0; i < 5; i = i + 2) {
    int count = 0;
    for (int j = 0; j < 5; j = j + 2)
      if (tabela[i][j] == 'x') {
        count += 1;
      }
    a = 0;
    if (count == 3) {
      printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
      printf("\t   o jogador (X) ganhou!\n\n");
      printf("\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
      a = 1;
      return a;
    }
  }
  for (int i = 0; i < 5; i = i + 2) {
    int count = 0;
    for (int j = 0; j < 5; j = j + 2)
      if (tabela[i][j] == 'o') {
        count += 1;
      }
    a = 0;
    if (count == 3) {
      printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
      printf("\t   o jogador (O) ganhou!\n\n");
      printf("\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
      a = 1;
      return a;
    }
  }
  for (int i = 0; i < 5; i = i + 2) {
    int count = 0;
    for (int j = 0; j < 5; j = j + 2)
      if (tabela[j][i] == 'x') {
        count += 1;
      }
    a = 0;
    if (count == 3) {
      printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
      printf("\t   o jogador (X) ganhou!\n\n");
      printf("\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
      a = 1;
      return a;
    }
  }
  for (int i = 0; i < 5; i = i + 2) {
    int count = 0;
    for (int j = 0; j < 5; j = j + 2)
      if (tabela[j][i] == 'o') {
        count += 1;
      }
    a = 0;
    if (count == 3) {
      printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
      printf("\t   o jogador (O) ganhou!\n\n");
      printf("\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
      a = 1;
      return a;
    }
  }
  for (int i = 0; i < 5; i = i + 4) {
    int count = 0;
    for (int j = 0; j < 5; j = j + 2)
      if (tabela[j][j] == 'x') {
        count += 1;
      }
    a = 0;
    if (count == 3) {
      printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
      printf("\t   o jogador (X) ganhou!\n\n");
      printf("\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
      a = 1;
      return a;
    }
  }
  for (int i = 0; i < 5; i = i + 4) {
    int count = 0;
    for (int j = 0; j < 5; j = j + 2)
      if (tabela[j][j] == 'o') {
        count += 1;
      }
    a = 0;
    if (count == 3) {
      printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
      printf("\t   o jogador (O) ganhou!\n\n");
      printf("\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
      a = 1;
      return a;
    }
  }
  if (tabela[0][4] == 'o' && tabela[2][2] == 'o' && tabela[4][0] == 'o') {
    printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
    printf("\t   o jogador (O) ganhou!\n\n");
    printf("\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    a = 1;
    return a;
  }
  if (tabela[0][4] == 'x' && tabela[2][2] == 'x' && tabela[4][0] == 'x') {
    printf("\n\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n");
    printf("\t   o jogador (X) ganhou!\n\n");
    printf("\t!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
    a = 1;
    return a;
  }

  return a;
}

int playX(int x, char tabela[5][5]) {
  printf("onde vc quer fazer sua jogada (X)? ");
  scanf("%i", &x);

  switch (x) {
  case 1:
    //[0][0]
    if (isdigit(tabela[0][0])) {
      tabela[0][0] = 'x';
      return 0;
    }

    break;

  case 2:
    //[0][2]
    if (isdigit(tabela[0][2])) {
      tabela[0][2] = 'x';
      return 0;
    }

    break;

  case 3:
    //[0][4]
    if (isdigit(tabela[0][4])) {
      tabela[0][4] = 'x';
      return 0;
    }

    break;

  case 4:
    //[2][0]
    if (isdigit(tabela[2][0])) {
      tabela[2][0] = 'x';
      return 0;
    }

    break;

  case 5:
    //[2][2]
    if (isdigit(tabela[2][2])) {
      tabela[2][2] = 'x';
      return 0;
    }

    break;

  case 6:
    //[2][4]
    if (isdigit(tabela[2][4])) {
      tabela[2][4] = 'x';
      return 0;
    }

    break;

  case 7:
    //[4][0]
    if (isdigit(tabela[4][0])) {
      tabela[4][0] = 'x';
      return 0;
    }

    break;

  case 8:
    //[4][2]
    if (isdigit(tabela[4][2])) {
      tabela[4][2] = 'x';
      return 0;
    }

    break;

  case 9:
    //[4][4]
    if (isdigit(tabela[4][4])) {
      tabela[4][4] = 'x';
      return 0;
    }

    break;
  }
  return 1;
}

int playO(int o, char tabela[5][5]) {
  printf("onde vc quer fazer sua jogada (o)? ");
  scanf("%i", &o);

  switch (o) {
  case 1:
    //[0][0]
    if (isdigit(tabela[0][0])) {
      tabela[0][0] = 'o';
      return 0;
    }

    break;

  case 2:
    //[0][2]
    if (isdigit(tabela[0][2])) {
      tabela[0][2] = 'o';
      return 0;
    }

    break;

  case 3:
    //[0][4]
    if (isdigit(tabela[0][4])) {
      tabela[0][4] = 'o';
      return 0;
    }

    break;

  case 4:
    //[2][0]
    if (isdigit(tabela[2][0])) {
      tabela[2][0] = 'o';
      return 0;
    }

    break;

  case 5:
    //[2][2]
    if (isdigit(tabela[2][2])) {
      tabela[2][2] = 'o';
      return 0;
    }

    break;

  case 6:
    //[2][4]
    if (isdigit(tabela[2][4])) {
      tabela[2][4] = 'o';
      return 0;
    }

    break;

  case 7:
    //[4][0]
    if (isdigit(tabela[4][0])) {
      tabela[4][0] = 'o';
      return 0;
    }

    break;

  case 8:
    //[4][2]
    if (isdigit(tabela[4][2])) {
      tabela[4][2] = 'o';
      return 0;
    }

    break;

  case 9:
    //[4][4]
    if (isdigit(tabela[4][4])) {
      tabela[4][4] = 'o';
      return 0;
    }

    break;
  }
  return 1;
}

int main(void) {
  char tabela[5][5];
  int num = 1;

  for (int i = 0; i < 5; i = i + 2) {
    for (int j = 0; j < 5; j = j + 2) {
      tabela[i][j] = num + '0';
      num++;
    }
  }

  for (int i = 1; i < 5; i = i + 2) {
    for (int j = 0; j < 5; j++) {
      tabela[j][i] = '|';
    }
  }

  for (int i = 1; i < 4; i = i + 2) {
    for (int j = 0; j < 5; j++) {
      tabela[i][j] = '-';
    }
  }
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%c ", tabela[i][j]);
    }
    printf("\n");
  }
  int a = 0, x, o, b, c, jogadas = 0;

  printf("\n");

  while (!a) {
    b = playX(x, tabela);
    jogadas++;
    printf("\n");
    if (b == 0) {
      for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
          printf("%c ", tabela[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      a = winner(a, tabela);
      if (a == 1) {
        break;
      }
      if (jogadas == 9) {
        printf("\no jogo empatou :(\n");
        break;
      }

      c = 1;
      while (c == 1) {
        c = playO(o, tabela);
        jogadas++;
        printf("\n");
      }
      for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
          printf("%c ", tabela[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      a = winner(a, tabela);
      if (a == 1) {
        break;
      }
      if (jogadas == 9) {
        printf("\no jogo empatou :(\n");
        break;
      }
    }
  }
}