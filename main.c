/**
  ******************************************************************************
  * @file    main.c
  * @author  Afra Ben Mabrouk
  * @brief   supporting multiple platforms 
  * @version V9.10.1
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Macros --------------------------------------------------------------------*/

#define INTEL
#define MIN
 
#define OTHERS
#define MAX 

/* Private function prototypes -----------------------------------------------*/
static  int min(int  var1 , int var2);
static  int max(int  var1 , int var2);
/* Private functions ---------------------------------------------------------*/

/**
  * @brief  Main program
  * @param  var1 and var2 
  * @retval None
  */

int main(void)
{
#ifdef MIN
 int resultMin=min(10,2);
#endif
 
 #ifdef MAX
int resultMax=max(100,20);
#endif

  while (1)
  {
   
  }
  
}
#ifdef MIN
static  int min(int  var1 , int var2) {
  return(((var1) < (var2)) ? (var1) : (var2)); /* appel de la  fonction minimum qui va retouner le min de deux variables     */
}
#endif

#ifdef MAX
static  int max(int  var1 , int var2) {
  return(((var1) > (var2)) ? (var1) : (var2)); /* appel de la  fonction qui va retouner le maximum de deux variables    */
}
#endif
/**************************************END OF FILE**************************************/
