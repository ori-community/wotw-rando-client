#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AudioAPIOptions.h>
#include <Modloader/app/structs/AkAudioAPI__Enum.h>

namespace app::classes::AudioAPIOptions {
    IL2CPP_REGISTER_METHOD(0x00856B40, void, OnEnable, (app::AudioAPIOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00857320, void, SatAudioAPI, (app::AudioAPIOptions * this_ptr, app::AkAudioAPI__Enum audio_a_p_i))
    IL2CPP_REGISTER_METHOD(0x00857450, void, ShowPrompt, (app::AudioAPIOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00857890, void, OnButtonPressed, (app::AudioAPIOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008578B0, void, ctor, (app::AudioAPIOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008578C0, void, _OnEnable_b__6_0, (app::AudioAPIOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008578D0, void, _OnEnable_b__6_1, (app::AudioAPIOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008578E0, void, _OnEnable_b__6_2, (app::AudioAPIOptions * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008578F0, void, _OnEnable_b__6_3, (app::AudioAPIOptions * this_ptr))
} // namespace app::classes::AudioAPIOptions
