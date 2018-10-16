/*
  Author: brilliant-potato
  This is the main file of an intel 8080 emulator i am writing, following 
  http://www.emulator101.com/ .   

*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define CMD_BUFSIZE 50

/*
  Struct used by disassemble_number.

  @cmd which command the hex number codes.
  @noo "number of operands". Number of Operand following the command.
  @cycles number of cycles the command takes.
  @allgood error handling.
*/



typedef struct cmd_opnr_cycles  {
    char* cmd;
    int noo;
    int cycles;
    int allgood;
} coc;

coc disassemble_number(char* hex_buffer) {
    
    int cycles = 7;
    int allgood = 1;
    char *cmd;
    unsigned char current_byte = *hex_buffer;
    unsigned char next_byte = *(hex_buffer+1);
    unsigned char nn_byte  = *(hex_buffer+2);
    switch (current_byte) {
          
        case 0b00000000: cmd = "NOP";cycles = 4; break;
        case 0b00000001: break;
        case 0b00000010: break;
        case 0b00000011: break;
        case 0b00000100: break;
        case 0b00000101: break;
        case 0b00000110: break;
        case 0b00000111: break; 
        case 0b00001000: break;
        case 0b00001001: break;
        case 0b00001010: break;
        case 0b00001011: break;
        case 0b00001100: break;
        case 0b00001101: break;
        case 0b00001110: break;
        case 0b00001111: break;
        case 0b00010000: break;
        case 0b00010001: break;
        case 0b00010010: break;
        case 0b00010011: break;
        case 0b00010100: break;
        case 0b00010101: break;
        case 0b00010110: break;
        case 0b00010111: break;
        case 0b00011000: break;
        case 0b00011001: break;
        case 0b00011010: break;
        case 0b00011011: break;
        case 0b00011100: break;
        case 0b00011101: break;
        case 0b00011110: break;
        case 0b00011111: break;
        case 0b00100000: break;
        case 0b00100001: break;
        case 0b00100010: break;
        case 0b00100011: break;
        case 0b00100100: break;
        case 0b00100101: break;
        case 0b00100110: break;
        case 0b00100111: break;
        case 0b00101000: break;
        case 0b00101001: break;
        case 0b00101010: break;
        case 0b00101011: break;
        case 0b00101100: break;
        case 0b00101101: break;
        case 0b00101110: break;
        case 0b00101111: break;
        case 0b00110000: break;
        case 0b00110001: break;
        case 0b00110010: break;
        case 0b00110011: break;
        case 0b00110100: break;
        case 0b00110101: break;
        case 0b00110110: break;
        case 0b00110111: break;
        case 0b00111000: break;
        case 0b00111001: break;
        case 0b00111010: break;
        case 0b00111011: break;
        case 0b00111100: break;
        case 0b00111101: break;
        case 0b00111110: break;
        case 0b00111111: break;   
// Start MOV 
        case 0b01000000: cmd = "MOV\tB,B"; cycles = 5;break;
        case 0b01000001: cmd = "MOV\tB,C"; cycles = 5;break;
        case 0b01000010: cmd = "MOV\tB,D"; cycles = 5;break;
        case 0b01000011: cmd = "MOV\tB,E"; cycles = 5;break;
        case 0b01000100: cmd = "MOV\tB,H"; cycles = 5;break;
        case 0b01000101: cmd = "MOV\tB,L"; cycles = 5;break;
        case 0b01000110: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\tB,$%x%x",nn_byte,next_byte); cycles = 5; break;
        case 0b01000111: cmd = "MOV\tB,A"; cycles = 5;break;

        case 0b01001000: cmd = "MOV\tC,B"; cycles = 5;break; 
        case 0b01001001: cmd = "MOV\tC,C"; cycles = 5;break; 
        case 0b01001010: cmd = "MOV\tC,D"; cycles = 5;break; 
        case 0b01001011: cmd = "MOV\tC,E"; cycles = 5;break; 
        case 0b01001100: cmd = "MOV\tC,H"; cycles = 5;break; 
        case 0b01001101: cmd = "MOV\tC,L"; cycles = 5;break; 
        case 0b01001110: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\tC,$%x%x",nn_byte,next_byte); cycles = 5; break;
        case 0b01001111: cmd = "MOV\tC,A"; cycles = 5;break;                 

        case 0b01010000: cmd = "MOV\tD,B"; cycles = 5;break; 
        case 0b01010001: cmd = "MOV\tD,C"; cycles = 5;break; 
        case 0b01010010: cmd = "MOV\tD,D"; cycles = 5;break; 
        case 0b01010011: cmd = "MOV\tD,E"; cycles = 5;break; 
        case 0b01010100: cmd = "MOV\tD,H"; cycles = 5;break;                    
        case 0b01010101: cmd = "MOV\tD,L"; cycles = 5;break; 
        case 0b01010110: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\tD,$%x%x",nn_byte,next_byte); cycles = 5; break;
        case 0b01010111: cmd = "MOV\tD,A"; cycles = 5;break;                 

        case 0b01011000: cmd = "MOV\tE,B"; cycles = 5;break;
        case 0b01011001: cmd = "MOV\tE,C"; cycles = 5;break;
        case 0b01011010: cmd = "MOV\tE,D"; cycles = 5;break;
        case 0b01011011: cmd = "MOV\tE,E"; cycles = 5;break;
        case 0b01011100: cmd = "MOV\tE,H"; cycles = 5;break;    
        case 0b01011101: cmd = "MOV\tE,L"; cycles = 5;break;
        case 0b01011110: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\tE,$%x%x",nn_byte,next_byte); cycles = 5; break;
        case 0b01011111: cmd = "MOV\tH,A"; cycles = 5;break;                                           

        case 0b01100000: cmd = "MOV\tH,B"; cycles = 5;break;                                           
        case 0b01100001: cmd = "MOV\tH,C"; cycles = 5;break;                                           
        case 0b01100010: cmd = "MOV\tH,D"; cycles = 5;break;                                           
        case 0b01100011: cmd = "MOV\tH,E"; cycles = 5;break;                                           
        case 0b01100100: cmd = "MOV\tH,H"; cycles = 5;break;                                           
        case 0b01100101: cmd = "MOV\tH,L"; cycles = 5;break;                                           
        case 0b01100110: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\tH,$%x%x",nn_byte,next_byte); cycles = 5; break;
        case 0b01100111: cmd = "MOV\tH,A"; cycles = 5;break;
                 
        case 0b01101000: cmd = "MOV\tL,B"; cycles = 5;break;                                           
        case 0b01101001: cmd = "MOV\tL,C"; cycles = 5;break;                                           
        case 0b01101010: cmd = "MOV\tL,D"; cycles = 5;break;                                           
        case 0b01101011: cmd = "MOV\tL,E"; cycles = 5;break;                                           
        case 0b01101100: cmd = "MOV\tL,H"; cycles = 5;break;                    
        case 0b01101101: cmd = "MOV\tL,L"; cycles = 5;break;                                           
        case 0b01101110: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\tL,$%x%x",nn_byte,next_byte); cycles = 5; break;
        case 0b01101111: cmd = "MOV\tL,A"; cycles = 5;break;   
        
        case 0b01110000: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\t$%x%x,B",nn_byte,next_byte); cycles = 5; break; 
        case 0b01110001: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\t$%x%x,C",nn_byte,next_byte); cycles = 5; break;
        case 0b01110010: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\t$%x%x,D",nn_byte,next_byte); cycles = 5; break;
        case 0b01110011: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\t$%x%x,E",nn_byte,next_byte); cycles = 5; break;
        case 0b01110100: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\t$%x%x,G",nn_byte,next_byte); cycles = 5; break;
        case 0b01110101: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\t$%x%x,L",nn_byte,next_byte); cycles = 5; break;
        case 0b01110110: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\t$%x%x,$%x%x",nn_byte,next_byte,nn_byte,next_byte); cycles = 5; break;
        case 0b01110111: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\t$%x%x,A",nn_byte,next_byte); cycles = 5; break;
        
        case 0b01111000: cmd = "MOV\tA,B"; cycles = 5;break;    
        case 0b01111001: cmd = "MOV\tA,C"; cycles = 5;break;    
        case 0b01111010: cmd = "MOV\tA,D"; cycles = 5;break;    
        case 0b01111011: cmd = "MOV\tA,E"; cycles = 5;break;    
        case 0b01111100: cmd = "MOV\tA,H"; cycles = 5;break;    
        case 0b01111101: cmd = "MOV\tA,L"; cycles = 5;break;    
        case 0b01111110: cmd = malloc(CMD_BUFSIZE*sizeof(char));snprintf(cmd,CMD_BUFSIZE,"MOV\tA,$%x%x",nn_byte,next_byte); cycles = 5; break;
        case 0b01111111: cmd = "MOV\tA,A"; cycles = 5;break;   
// END MOV        
        case 0b10000000: break;
        case 0b10000001: break;
        case 0b10000010: break;
        case 0b10000011: break;
        case 0b10000100: break;
        case 0b10000101: break;
        case 0b10000110: break;
        case 0b10000111: break;
        case 0b10001000: break;
        case 0b10001001: break;
        case 0b10001010: break;
        case 0b10001011: break;
        case 0b10001100: break;
        case 0b10001101: break;
        case 0b10001110: break;
        case 0b10001111: break;
        case 0b10010000: break;
        case 0b10010001: break;
        case 0b10010010: break;
        case 0b10010011: break;
        case 0b10010100: break;
        case 0b10010101: break;
        case 0b10010110: break;
        case 0b10010111: break;
        case 0b10011000: break;
        case 0b10011001: break;
        case 0b10011010: break;
        case 0b10011011: break;
        case 0b10011100: break;
        case 0b10011101: break;
        case 0b10011110: break;
        case 0b10011111: break;
        case 0b10100000: break;
        case 0b10100001: break;
        case 0b10100010: break;
        case 0b10100011: break;
        case 0b10100100: break;
        case 0b10100101: break;
        case 0b10100110: break;
        case 0b10100111: break;
        case 0b10101000: break;
        case 0b10101001: break;
        case 0b10101010: break;
        case 0b10101011: break;
        case 0b10101100: break;
        case 0b10101101: break;
        case 0b10101110: break;
        case 0b10101111: break;
        case 0b10110000: break;
        case 0b10110001: break;
        case 0b10110010: break;
        case 0b10110011: break;
        case 0b10110100: break;
        case 0b10110101: break;
        case 0b10110110: break;
        case 0b10110111: break;
        case 0b10111000: break;
        case 0b10111001: break;
        case 0b10111010: break;
        case 0b10111011: break;
        case 0b10111100: break;
        case 0b10111101: break;
        case 0b10111110: break;
        case 0b10111111: break;
        case 0b11000000: break;
        case 0b11000001: break;
        case 0b11000010: break;
        case 0b11000011: break;
        case 0b11000100: break;
        case 0b11000101: break;
        case 0b11000110: break;
        case 0b11000111: break;
        case 0b11001000: break;
        case 0b11001001: break;
        case 0b11001010: break;
        case 0b11001011: break;
        case 0b11001100: break;
        case 0b11001101: break;
        case 0b11001110: break;
        case 0b11001111: break;
        case 0b11010000: break;
        case 0b11010001: break;
        case 0b11010010: break; 
        case 0b11010011: break;
        case 0b11010100: break;
        case 0b11010101: break;
        case 0b11010110: break;
        case 0b11010111: break;
        case 0b11011000: break;
        case 0b11011001: break;
        case 0b11011010: break;
        case 0b11011011: break;
        case 0b11011100: break;
        case 0b11011101: break;
        case 0b11011110: break;
        case 0b11011111: break;
        case 0b11100000: break;
        case 0b11100001: break;
        case 0b11100010: break;
        case 0b11100011: break;
        case 0b11100100: break;
        case 0b11100101: break;
        case 0b11100110: break;
        case 0b11100111: break;
        case 0b11101000: break;
        case 0b11101001: break;
        case 0b11101010: break;
        case 0b11101011: break;
        case 0b11101100: break;
        case 0b11101101: break;
        case 0b11101110: break;
        case 0b11101111: break;
        case 0b11110000: break;
        case 0b11110001: break;
        case 0b11110010: break;
        case 0b11110011: break;
        case 0b11110100: break;
        case 0b11110101: break;
        case 0b11110110: break;
        case 0b11110111: break;
        case 0b11111000: break;
        case 0b11111001: break;
        case 0b11111010: break;
        case 0b11111011: break;
        case 0b11111100: break;
        case 0b11111101: break;
        case 0b11111110: break;
        case 0b11111111: break;

    }
}




int main (int argc, char** argv) {
    
    char* test = "HALLO WELT!";
    unsigned char test2 = *test; 
    unsigned char test3 = *(test+1);    
    printf("%c\t%c\n",test2,test3);

}
