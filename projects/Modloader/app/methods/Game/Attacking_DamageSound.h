#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Game::Attacking_DamageSound {
    IL2CPP_REGISTER_METHOD(0x015223F0, app::SoundPlayer*, Play, (app::Damage * damage, app::Transform* target, app::DamageBasedSoundProvider* sound_provider))
}
