#include <stdafx.h>

static void OnStop()
{
	SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);

	SET_TIME_SCALE(1.f);
}

static void OnTickX02()
{
	SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
	SET_TIME_SCALE(.2f);
}

static RegisterEffect registerEffect1(EFFECT_GAMESPEED_X02, nullptr, OnStop, OnTickX02);

static void OnTickX05()
{
	SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
	SET_TIME_SCALE(.5f);
}

static RegisterEffect registerEffect2(EFFECT_GAMESPEED_X05, nullptr, OnStop, OnTickX05);