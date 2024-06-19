#pragma once
#include "RequestMsg.pb.h"
#include "Codec.h"

struct RequestInfo {
	//1 ��ԿЭ�� //2 ��ԿУ��; // 3 ��Կע��
	int cmdType; // ��������
	string clientId; // �ͻ��˱��
	string serverId; // �������˱��
	string sign;
	string data;
};

class RequestCodec : public Codec {
public:
	RequestCodec();
	~RequestCodec();
	RequestCodec(string encstr);
	RequestCodec(RequestInfo *info);
	void initMessage(string encstr);
	void initMessage(RequestInfo *info);
	string encodeMsg();
	void* decodeMsg();

private:
	// ����Ҫ������ַ���
	string m_encStr;
	// ��Ҫ���л�������
	RequestMsg m_msg;
};