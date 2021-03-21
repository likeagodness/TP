#pragma once
#include <SFML/Graphics.hpp>
#include <map.h>
#include <player.h>
#include <enemy.h>
#include <flag.h>
#include <message.h>
#include <list>

class game //класс игры
{
private:
	bool gameOver; //булевска€ переменна€-состо€ние игры (закончена/не закончена)
	bool gameStarted; //булевска€ переменна€-начало игры (начата/не начата)

	int frags; //переменна€, в которой отслеживает количество уничтоженных врагами игроков

	sf::RenderWindow Window; //объект Window класса RenderWindow, в котором будет отрисовыватьс€ наша игра
	flag Flag; //объект-флаг
	map Map; //объект-карта

	

	

	message msgStart; //объект-сообщение о старте игры
	message msgOver; //объект-сообщение о конце игры
	message msgLost; //объект-сообщение о проигрыше игры
	message msgWon_1; //объект-сообщение о победе первого игрока
	message msgWon_2; //объект-сообщение о победе второго игрока
	message msgPlayer1Control; //объект-сообщение об управлении первым игроком
	message msgPlayer2Control; //объект-сообщение об управлении вторым игроком

public:
	game(); //объ€вление конструктора без параметров

	~game(); //объ€вление деструктора

};
