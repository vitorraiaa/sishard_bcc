/* Implementar função solucao_ex3 */

void solucao_ex3(long rdi, long rsi, int *rdx, int *rcx, int *r8) {
    *rdx = (rdi < rsi);  // Armazena 1 em rdx se rdi < rsi, senão 0
    *rcx = (rdi == rsi); // Armazena 1 em rcx se rdi == rsi, senão 0
    *r8 = (rdi > rsi);   // Armazena 1 em r8 se rdi > rsi, senão 0
}
