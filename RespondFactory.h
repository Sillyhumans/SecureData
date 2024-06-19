#pragma once
#include "BaseFactory.h"
#include "RespondCodec.h"

class RespondFactory : public BaseFactory {
public:
	RespondFactory();
	RespondFactory(string enc);
	RespondFactory(RespondInfo *info);
	~RespondFactory();
	Codec* createObject();
private:
	// ����Ҫ������ַ���
	string m_encStr;
	// ��Ҫ���л�������
	RespondInfo *m_info;
	// �ж��Ǳ�������ǽ������
	int m_flag;
};
