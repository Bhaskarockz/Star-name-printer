#include <stdio.h>
#include<string.h>
void st ();
 void sp();
 void nl();
 void in();
 void fa ();
void fb();
void fc();

//Compiler version gcc  6.3.0
void  st(int s)
{ int i;
 for (i=0;i<s; i++){
    printf("*");}
  }
 void sp(int s){
    int i;
  for (i=0; i<s;i++){
    printf(" ");
  }}
void nl(){
  printf("\n");
}


int main()
{
  int i;
  char n[50];
  
  printf("Hello, user \n");
  nl();
  nl();
  printf("please enter your name\t\t\t:\t");
warning:  printf ("\n\t\t(must be in upper case)");
  nl();
  gets(n);
 
  
  
  
 for(i=0;i<strlen(n);i++){
   
 if ('a'<=n[i]&&n[i]<='z'){
   goto warning ;
 }}
 for(i=0;i<strlen(n);i++){
  switch(n[i]){ //-----------1-----------
    case'A':
      case'C':
        case'O':
          case'Q':
            case'G':
              nl();
                sp(1);
                st(4);
                break;
    case'B':
      case'D':
        case'P':
          case'R':
             nl();
                st(5);
                break;         
       case'E':
        case'F':
          case'T':
           case 'Z':
             case'I':
               case 'J':
                 
                    nl();
                     st(6);
                     break;
       case'Y':
         case'U':
           case'H':
             case'K':
               case'X':
                 case'V':
                   case'N':
                     case'M':
                       fa();
                       break;
          case'W':
               fb();
               break;
           case'L':
             nl();
             st(1);    
             break;
           case'S':
             nl();
             sp(2);
             st(4);
             break;           
    
  }
  switch(n[i]){   //-----------2-----------
       case'A':
         case'U':
           case'H':
             case'D': 
               case'B':
                 case'C':
                   case'O':
                     case'V':
                       case'R':
                         case 'P':
                           case'Q':
                           
                       fa();
                       break;
    
         case'I':
           case'J':
             case'T':
               fc();
                break;
         case'L':
           case'E':
             case'F':
               case'G':
               
             nl();
             st(1);    
             break;
          case 'K':
            nl();
            st(1);
            sp(4);
            st(1);
            break;
            case'S':
              nl();
              sp(1);
              st(1);
              break;
            case 'X':
              case'Y':
                nl();
                sp(2);
                 st(1);
                  sp(2);
                   st(1);
                    break ;
             case 'Z':
              nl();
              sp(5);
              st(1);
               break;
            case 'M':
              nl();
              st(1);
              sp(0);
              st(1);
              sp(3);
              st(1);
              sp(0);
              st(1);
              break;
           case 'W':
             fb();
             break;
           case 'N':
             nl();
             st(1);
             sp(1);
             st(1);
             sp(3);
             st(1);
             break;
             
             
    }
    switch (n[i]){//-----------3-----------
      case'A':
      case 'H':
        nl();
        st(6);
        break;
        case'B':
      case'R':
        case 'P':     
        nl();
        st(4);        
       break ;
      case'C':
        nl();
        st(1);
        break;
     case'D':
       case'O':
        case 'U':
       fa();
       break;
    case'E':
      case'F':
        nl();
        st(4);
        break;
        case'G':
          nl();
          st(1);
          sp(3);
          st(2);
          break;
      case 'J':
        case 'I':
          case'T':
            case 'S':
              case'X':
                case'Y':
                  case'Z':
            fc();
            break;
      
      case 'K':
         nl();
         st(3);
         break;
     case 'V':
        nl();
        sp(1);
        st(1);
        sp(4);
        st(1);
        break ;
       case 'Q':
         case'N':
        fb();
        break;
        case 'M':
          case'W':
              nl();
              st(1);
              sp(1);
              st(1);
              sp(1);
              st(1);
              sp(1);
              st(1);
              break;    
    }
  switch(n[i]){//-----------4-----------
    
    case'A':
     case'B':
       case'D':
         case 'U':
          case'C':
            case'G':
             case'O':
               case'H':
             fa();
              break;        
    
     case'E':
       case'F':
         case 'P':
           case 'L':
         nl();
         st(1);
         break;
       
        case 'I':
          case'T':
            case 'Y':
            fc();
            break;     
       case 'J':
          nl();
          st(1);
          sp(2);
          st(1);
          break ;
       case 'K':
         case'R':
            nl();
            st(1);
            sp(4);
            st(1);
            break;
         case'S':
           nl();
           sp(7);
           st(1);
            break;
        case 'V':
          nl();
          sp(2);
          st(1);
          sp(2);
          st(1);
          break;
           case 'X':
                nl();
                sp(2);
                 st(1);
                  sp(2);
                   st(1);
                    break ;
            case 'Z':
              nl();
              sp(2);
              st(1);
               break;
           case 'Q':
             nl();
             st(1);
             sp(4);
             st(1);
             sp(0);
             st(1);
             break;
           case 'M':
              fb();
              break;
           case 'W':
             nl();
              st(1);
              sp(0);
              st(1);
              sp(3);
              st(1);
              sp(0);
              st(1);
              break;
          case 'N':
             nl();
             st(1);
             sp(3);
             st(1);
             sp(1);
             st(1);
             break; 
  }
  switch(n[i]){//-----------5-----------
    
    case'A':
      case'H':
        case 'K':
          case'R':
            case 'X':
              case'W':
                case'N':
      fa();
      break;
      case'B':
        case'D':
        
        nl();
        st(5);
        break;
      nl();
      sp(1);
      st(4);
      break;    
    case'E':
     case'L':
       case'I':
         case'Z':
       nl();
       st(6);
       break;
    case'F':
      case 'P':
      nl();
      st(1);
      break;
      case'C':
        case 'S':
    case'G':
      case'O':
        case'U':
                nl();
                sp(1);
                st(4);
                break;
       case 'J':
         nl();
         sp(1);
         st(2);
           break;
        case'T':
          case'V':
            case'Y':
            nl();
            sp(4);
            st(1);
            break;
      case 'Q':
        nl();
        sp(1);
        st(4);
        sp(3);
        st(1);
        break;
     case 'M':
      fb();
      break;
  }
  nl();
  nl();
  nl();
  }
  nl();
  nl();
end : printf("thank you for investing your valueble time ");
  return 0;
}
void fa(){
    nl();
      st(1);
      sp(6);
      st(1);
  }
  void fb(){
    nl();
      st(1);
      sp(2);
      st(1);
      sp(2);
      st(1);
  }
  void fc(){
    nl();
      sp(4);
      st(1);
  }