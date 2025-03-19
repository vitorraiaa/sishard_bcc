/* Implementar função solucao_ex4 */
int solucao_ex4(int rdi, int rsi) {
    if (rdi <= 17) {
        return 18 - rdi;
    }

    rsi -= 65;  // Subtrai 65 de rsi
    if ((unsigned char)rsi > 1) {  // Verifica se rsi convertido para unsigned char é maior que 1
        return -1;
    }

    return rdi - 17;
}
