#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Core::Music_Layer {
    IL2CPP_REGISTER_METHOD(0x00DAD8C0, bool, UsesGivenSoundProvider, (app::Music_Layer * this_ptr, app::SoundProvider* sound_provider))
    IL2CPP_REGISTER_METHOD(0x00DADA90, void, ctor, (app::Music_Layer * this_ptr, app::SoundProvider* sound_provider, float fade_in_duration, float fade_out_duration))
    IL2CPP_REGISTER_METHOD(0x00DADCF0, void, Enter, (app::Music_Layer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DADF10, void, Exit, (app::Music_Layer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAE0C0, void, Update, (app::Music_Layer * this_ptr))
} // namespace app::classes::Core::Music_Layer
