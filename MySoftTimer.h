/**
  ******************************************************************************
  * @file    MySoftTimer.h
  * @author  linqh
  * @version V1.0.0
  * @date    2017-09-04
  * @brief   
  ******************************************************************************
 **/


#ifndef __MYSOFTTIMER_H
#define __MYSOFTTIMER_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * @brief	��ʱ�����
  * @remark	
  */
typedef void *M_TimerHandle;

/**
  * @brief	��ʱ���ص�����
  * @param	size_t:�����ü������λms
  *
  * @return	void
  * @remark	
  */
typedef void (*SoftTimerCallbackFunc)(size_t);

/**
  * @brief	������ʱ��
  * @param	*timer:��ʱ�����
  * @param	interval:��ʱ����ʱ���
  * @param	func:��ʱ���ص�����
  * @param	Reload:��ʱ����װ��ʹ��
  *
  * @return	bool�������ɹ�����true��ʧ�ܷ���false
  * @remark	�Ѵ������Ķ�ʱ������ɾ����������´��������򷵻�false
  */
bool SoftTimer_Create(M_TimerHandle *timer,size_t interval, SoftTimerCallbackFunc func,bool Reload);

/**
  * @brief	ɾ����ʱ��
  * @param	*timer:��ʱ�������ָ��
  *
  * @return	bool
  * @remark	
  */
bool SoftTimer_Kill(M_TimerHandle *timer);

/**
  * @brief	������ʱ��
  * @param	timer:��ʱ�����
  *
  * @return	bool
  * @remark	
  */
bool SoftTimer_Start(M_TimerHandle timer);

/**
  * @brief	ֹͣ��ʱ��
  * @param	timer:��ʱ�����
  *
  * @return	bool
  * @remark	
  */
bool SoftTimer_Stop(M_TimerHandle timer);

/**
  * @brief	��ʱ���Ƿ��Ѿ�����
  * @param	timer:��ʱ�����
  *
  * @return	bool
  * @remark	
  */
bool SoftTimer_IsTimerStart(const M_TimerHandle timer);

/**
  * @brief	���ڵ��ã�ˢ����ʱ����ʱʱ��
  * @param	Interval ���ü������λms
  *
  * @return	void
  * @remark	��Ӳ����ʱ���ж��е���
  */
void SoftTimer_InterruptHandle(size_t Interval);

/**
  * @brief	ɨ�趨ʱ����ִ�ж�ʱ���ص�����
  * @param	void
  *
  * @return	void
  * @remark	����ѭ���е���
  */
void SoftTimer_CycleHandle(void);


#endif
