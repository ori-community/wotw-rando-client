#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioFormatDelegate.h>
#include <Modloader/app/structs/AkAudioInputManager_AudioSamplesDelegate.h>
#include <Modloader/app/structs/AkCallbackInfo.h>
#include <Modloader/app/structs/AkCallbackType__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AkAudioInputManager {
    IL2CPP_REGISTER_METHOD(0x026C6E70, uint32_t, PostAudioInputEvent_1, (app::Event_1 * ak_event, app::GameObject* game_object, app::AkAudioInputManager_AudioSamplesDelegate* sample_delegate, app::AkAudioInputManager_AudioFormatDelegate* format_delegate))
    IL2CPP_REGISTER_METHOD(0x026C70E0, uint32_t, PostAudioInputEvent_2, (uint32_t ak_event_i_d, app::GameObject* game_object, app::AkAudioInputManager_AudioSamplesDelegate* sample_delegate, app::AkAudioInputManager_AudioFormatDelegate* format_delegate))
    IL2CPP_REGISTER_METHOD(0x026C72D0, uint32_t, PostAudioInputEvent_3, (app::String * ak_event_name, app::GameObject* game_object, app::AkAudioInputManager_AudioSamplesDelegate* sample_delegate, app::AkAudioInputManager_AudioFormatDelegate* format_delegate))
    IL2CPP_REGISTER_METHOD(0x026C74C0, bool, InternalAudioSamplesDelegate, (uint32_t playing_i_d, app::Single__Array* samples, uint32_t channel_index, uint32_t frames))
    IL2CPP_REGISTER_METHOD(0x026C7630, void, InternalAudioFormatDelegate, (uint32_t playing_i_d, void* format))
    IL2CPP_REGISTER_METHOD(0x026C77C0, void, TryInitialize, ())
    IL2CPP_REGISTER_METHOD(0x026C79E0, void, AddPlayingID, (uint32_t playing_i_d, app::AkAudioInputManager_AudioSamplesDelegate* sample_delegate, app::AkAudioInputManager_AudioFormatDelegate* format_delegate))
    IL2CPP_REGISTER_METHOD(0x026C7B50, void, EventCallback, (app::Object * cookie, app::AkCallbackType__Enum type, app::AkCallbackInfo* callback_info))
    IL2CPP_REGISTER_METHOD(0x026C7CC0, void, cctor, ())
} // namespace app::classes::AkAudioInputManager
