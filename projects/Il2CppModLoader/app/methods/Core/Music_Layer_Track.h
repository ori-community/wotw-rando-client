#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Core::Music_Layer_Track {
    IL2CPP_REGISTER_METHOD(0x00DAE320, void, ctor, (app::Music_Layer_Track * this_ptr, app::SoundProvider* sound_provider, float fade_in_duration, float fade_out_duration))
    IL2CPP_REGISTER_METHOD(0x00DAE330, void, Enter, (app::Music_Layer_Track * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAE460, void, Exit, (app::Music_Layer_Track * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DAE520, void, Update, (app::Music_Layer_Track * this_ptr))
} // namespace app::classes::Core::Music_Layer_Track
