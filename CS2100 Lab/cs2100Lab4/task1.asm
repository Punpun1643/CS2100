# messages.asm
  .data 
str: .asciiz "the answer = "
  .text

main: 

    li	$v0, 5 	  #system call code for read_int
    syscall
    add	$t1, $v0, $zero #store the input int in a temporary register
 

    li   $v0, 4    # system call code for print_string
    la   $a0, str  # address of string to print
    syscall        # print the string

    li   $v0, 1    # system call code for print_int
    la   $a0, 0($t1)    # integer to print
    syscall        # print the integer
    
    li   $v0, 10   # system call code for exit
    syscall        # terminate program
