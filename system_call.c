/**
 * @file system_call.c
 * 
 * @brief   Exemple de code C pour des appels systèmes 
 *          (équivalent à une commande dans un émulateur de terminal, ou un script Bash)
 * 
 * @author  Kevin Cotton
 * @date    2024-08-02
 *
 */
#include <stdlib.h>
#include <stdio.h>

/**
 *Ce programme affiche 3 textes : processus 1, processus 3 et processus 5.
 *La commande sleep 10 met le programme en pause pendant 10 seconde.
 *La commande sleep 5 met le programme en pause pendant 5 secondes. 
 *Ce programme affiche "terminé" lorsque le programme est finit.
 * @return     0 
 */
int main() {
  system("echo \"processus 1 \""); 
  system("sleep 10"); // processus 2
  system("echo \"processus 3 \""); 
  system("sleep 5"); // processus 4
  system("echo \"processus 5 \""); 

  printf("\n terminé \n");
  return 0;
}
