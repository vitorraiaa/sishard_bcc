/* Implementar função solucao_ex1 */

int solucao_ex1(int rdi, int rsi, int rdx){

    int rax = rdi + rsi;
    int rcx = rax + (rdx * 4);
    
    rdi = rdi * rdi;
    rax = rdi + (rsi * 2);
    rdx += rax;

    return (rcx >= rdx) ? 1 : 0;

}