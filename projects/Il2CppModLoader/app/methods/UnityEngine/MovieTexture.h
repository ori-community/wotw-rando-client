#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::MovieTexture {
    IL2CPP_REGISTER_METHOD(0x03144CC0, void, Play, (app::MovieTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03144CC0, void, INTERNAL_CALL_Play, (app::MovieTexture * self))
    IL2CPP_REGISTER_METHOD(0x03144D10, void, Stop, (app::MovieTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03144D10, void, INTERNAL_CALL_Stop, (app::MovieTexture * self))
    IL2CPP_REGISTER_METHOD(0x03144D60, void, Pause, (app::MovieTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03144D60, void, INTERNAL_CALL_Pause, (app::MovieTexture * self))
    IL2CPP_REGISTER_METHOD(0x03144DB0, app::AudioClip*, get_audioClip, (app::MovieTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03144E00, void, set_loop, (app::MovieTexture * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x03144E60, bool, get_isPlaying, (app::MovieTexture * this_ptr))
} // namespace app::classes::UnityEngine::MovieTexture
