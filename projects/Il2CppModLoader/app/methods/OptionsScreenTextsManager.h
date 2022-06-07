#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::OptionsScreenTextsManager {
    IL2CPP_REGISTER_METHOD(0x006193E0, void, UpdateItems, (app::OptionsScreenTextsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061A620, void, UpdateHDRStateLabel, (app::OptionsScreenTextsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061A890, void, UpdateFullscreenLabel, (app::OptionsScreenTextsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061AB70, void, FixedUpdate, (app::OptionsScreenTextsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061ACD0, void, Start, (app::OptionsScreenTextsManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061AD60, app::MessageProvider *, GetAudioAPIMessageProvider, (app::OptionsScreenTextsManager * this_ptr, app::AkAudioAPI__Enum audio_a_p_i))
    IL2CPP_REGISTER_METHOD(0x0061ADC0, app::TranslatedMessageProvider *, GetLanguageMessageProvider, (app::OptionsScreenTextsManager * this_ptr, app::Language__Enum lang))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::OptionsScreenTextsManager * this_ptr))
}
