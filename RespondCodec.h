#pragma once
#include "RespondMsg.pb.h"
#include "Codec.h"

struct RespondInfo {
	bool rv; // ����ֵ
	int seckeyid; 		// �Գ���Կ��� keysn
	string clientId; 	// �ͻ��˱��
	string serverId; 	// ���������
	string data; 	// �������������
};

class RespondCodec : public Codec {
public:
	RespondCodec();
	~RespondCodec();
	RespondCodec(string encstr);
	RespondCodec(RespondInfo *info);
	// init���չ���ʹ�õ�
	void initMessage(string encstr);
	void initMessage(RespondInfo *info);
	// ��д���ຯ�� �������л��ַ���
	string encodeMsg();
	// ���뺯�� ������Ӧ����һ���ṹ����������
	void* decodeMsg();

private:
	string m_encStr;
	RespondMsg m_msg;
};