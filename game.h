#pragma once
#include <SFML/Graphics.hpp>
#include <map.h>
#include <player.h>
#include <enemy.h>
#include <flag.h>
#include <message.h>
#include <list>

class game //����� ����
{
private:
	bool gameOver; //��������� ����������-��������� ���� (���������/�� ���������)
	bool gameStarted; //��������� ����������-������ ���� (������/�� ������)

	int frags; //����������, � ������� ����������� ���������� ������������ ������� �������

	sf::RenderWindow Window; //������ Window ������ RenderWindow, � ������� ����� �������������� ���� ����
	flag Flag; //������-����
	map Map; //������-�����

	

	

	message msgStart; //������-��������� � ������ ����
	message msgOver; //������-��������� � ����� ����
	message msgLost; //������-��������� � ��������� ����
	message msgWon_1; //������-��������� � ������ ������� ������
	message msgWon_2; //������-��������� � ������ ������� ������
	message msgPlayer1Control; //������-��������� �� ���������� ������ �������
	message msgPlayer2Control; //������-��������� �� ���������� ������ �������

public:
	game(); //���������� ������������ ��� ����������

	~game(); //���������� �����������

};
