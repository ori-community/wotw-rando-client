#pragma once

#include <macros.h>

enum class SoundEvent
{
    QuestComplete
};

INJECT_C_DLLEXPORT void play_sound(SoundEvent evt);
