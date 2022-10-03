#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ConditionBasedSoundProvider {
    IL2CPP_REGISTER_METHOD(0x011E3F60, app::SoundDescriptor*, GetSound, (app::ConditionBasedSoundProvider * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x011E4080, void, ctor, (app::ConditionBasedSoundProvider * this_ptr))
} // namespace app::classes::ConditionBasedSoundProvider
