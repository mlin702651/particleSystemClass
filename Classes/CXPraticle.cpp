#include <cmath>
#include "CXParticle.h"


CXParticle::CXParticle()
{
	_Particle = nullptr;
	_fVelocity = 0;	// ���l���t��
	_fLifeTime = 2;	// �ͩR�g��
	_fIntensity = 1;// ���l��q���̤j�ȡA�q�`�Ω���ܤ��l���C��
	_fOpacity = 255;	// �ثe���l���z����
	_fSize = 1;		// ���l���j�p
	_fGravity=0;	// ���l�����쪺���O�j�p
	_color=cocos2d::Color3B::WHITE;	// ���l���C��
}

void CXParticle::setParticle(const std::string& pngName, cocos2d::Scene& stage) {
	//�K��
	_Particle = Sprite::createWithSpriteFrameName(pngName);
	_Particle->setPosition(Point(0,0));
	_Particle->setOpacity(255);
	_Particle->setColor(Color3B::WHITE);
	//
	_bVisible = false;
	_Particle->setVisible(false);
	_iType = 0;
	
	BlendFunc blendfunc = { GL_SRC_ALPHA, GL_ONE };
	_Particle->setBlendFunc(blendfunc);
	stage.addChild(_Particle, 1);
}
void  CXParticle::setBehavior(int iType) {
	
	switch (iType)
	{
		
		case STAY_FOR_TWOSECONDS:
			

			_fVelocity = 0;
			_fLifeTime = 2.5f;
			_fIntensity = 1;
			_fOpacity = 255;			
			_fSize = 1;
			_color = Color3B(64 + rand() % 128, 64 + rand() % 128, 64 + rand() % 128);
			_fElapsedTime = 0;
			
			_fGravity = 0;
			_Particle->setOpacity(255);
			_Particle->setScale(_fSize);
			break;

			_iType = STAY_FOR_TWOSECONDS;

			break;

	default:
		break;
	}
}

bool CXParticle::update(float dt) {
	switch (_iType)
	{
	case STAY_FOR_TWOSECONDS:



		break;

	default:
		break;
	}
	return false;
}