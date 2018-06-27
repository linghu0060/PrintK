/**********************************************************************************************************/
/** @file     printk_cfg.h
*** @author   Linghu
*** @version  V1.0.0
*** @date     2018/6/22
*** @brief    Configure for the function printk
***********************************************************************************************************
*** @par Last Commit:
***      \$Author$ \n
***      \$Date$ \n
***      \$Rev$ \n
***      \$URL$ \n
***
*** @par Change Logs:
***      2018/6/26 -- Linghu -- the first version
***********************************************************************************************************/
#ifndef __PrintK_H___20180622_202957
#define __PrintK_H___20180622_202957
#ifdef  __cplusplus
extern  "C"
{
#endif
/**********************************************************************************************************/
/** @addtogroup PrintK
*** @{
*** @addtogroup                 PrintK_Config
*** @{
***********************************************************************************************************/

#define KERNEL_PUT_ENTER()      ttywrch_Enter()
#define KERNEL_PUT_CHAR(c)      ttywrch(c)
#define KERNEL_PUT_LEAVE()      ttywrch_Leave()

extern void ttywrch(int ch);
extern void ttywrch_Enter(void);
extern void ttywrch_Leave(void);

/*****************************  END OF FILE  **************************************************************/
/** @}
*** @}
*****/
#ifdef  __cplusplus
}
#endif
#endif
/**********************************************************************************************************/

