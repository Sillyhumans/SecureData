#pragma once
#include "BaseFactory.h"
#include "RequestCodec.h"

class RequestFactory: BaseFactory {
public:
	RequestFactory();
	RequestFactory(string enc);
	RequestFactory(RequestInfo *info);
	~RequestFactory();
	Codec* createCodec();
private:
	// ����Ҫ������ַ���
	string m_encStr;
	// ��Ҫ���л�������
	RequestInfo *m_info;
	// �ж��Ǳ�������ǽ������
	int m_flag;
};