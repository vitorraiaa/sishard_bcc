long vezes2(long a);

/* Implementar função solucao_ex2 */

long solucao_ex2(long rdi, long rsi) {
    long rbx = rdi;  
    long rax = vezes2(rsi);

    if (rax > rbx) {  // Se rax for maior que rbx, dobra rbx
        rbx *= 2;
    }

    return rax + rbx;  // Retorna a soma de rax e rbx
}
