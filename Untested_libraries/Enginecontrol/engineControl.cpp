/*
  engineControl.cpp - Library for giving basic controls to a set of engines.
  Created by Armian1, December 2, 2015.
*/
#include "Arduino.h"
#include "engineControl.h"

engineControl::engineControl(int rearEngineON)
{
  pinMode(rearEngineON, OUTPUT)
  _rearEngineON = rearEngineON;
}
engineControl::engineControl(int rearEngineD)
{
  pinMode(rearEngineD, OUTPUT)
  _rearEngineD = rearEngineD;
}
engineControl::engineControl(int frontEngineON)
{
  pinMode(rearEngineD, OUTPUT)
  _frontEngineON = frontEngineON;
}
engineControl::engineControl(int frontEngineD)
{
  pinMode(rearEngineD, OUTPUT)
  _frontEngineD = frontEngineD;
}

void engineControl::forward()
{
  digitalWrite(_rearEngineON, HIGH);
  }
void engineControl::backward()
{
 digitalWrite(_rearEngineON, HIGH);
 digitalWrite(_rearEngineD, HIGH);
}
void engineControl::left()
{
  digitalWrite(_frontEngineON, HIGH);
  digitalWrite(_frontEngineD, HIGH);
}
void engineControl::right()
{
  digitalWrite(_frontEngineON, HIGH);
}
void engineControl::stopFront()
{
  digitalWrite(_frontEngineON,LOW);
  digitalWrite(_frontEngineD, LOW);
}
void engineControl::stopRear()
{
  digitalWrite(_rearEngineON,LOW);
  digitalWrite(_rearEngineD, LOW);
}

