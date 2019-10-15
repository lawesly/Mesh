/*****************************************************************************
File Name:    packet_common.h
Description:   
History:	
Date                Author                   Description
2019-10-12         Lucien                    Creat
****************************************************************************/
#ifndef PACKET_COMMON_H__
#define PACKET_COMMON_H__


#define FRAME_WINDOW						(7)
#define FRAME_SIZE							(8)


#if (PACKET_NUM_BYTES==1)
		#define SENDER_MAX_PACKET_LEN  (220)
#else
		#define SENDER_MAX_PACKET_LEN  (4096)
#endif



/* ���ݰ���������� ��ռ�ֽ���  ���Ϊ1                 �����Է���0xFF ��Ϊ2 �����Է���0xFFFF                ��֧������ֵ*/
#define PACKET_NUM_BYTES				(1)







#endif




