#pragma once

#include <macros.h>

#include <string_view>

namespace randomizer
{
    namespace sound
    {
        enum class SoundEventID : uint32_t
        {
            // Game

            // Randomizer
            Catching = 1210588850
        };

        void play_sound(SoundEventID event_id, app::ISoundHost* host = nullptr);
        void play_sound_at(SoundEventID event_id, app::Vector3 location);
    }
}
