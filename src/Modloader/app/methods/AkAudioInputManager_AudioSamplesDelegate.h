#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkAudioInputManager_AudioSamplesDelegate.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::AkAudioInputManager_AudioSamplesDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::AkAudioInputManager_AudioSamplesDelegate* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x026C8450,
        bool,
        Invoke,
        app::AkAudioInputManager_AudioSamplesDelegate* this_ptr,
        uint32_t playing_i_d,
        uint32_t channel_index,
        app::Single__Array* samples
    )
    IL2CPP_REGISTER_METHOD(
        0x026C87F0,
        app::IAsyncResult*,
        BeginInvoke,
        app::AkAudioInputManager_AudioSamplesDelegate* this_ptr,
        uint32_t playing_i_d,
        uint32_t channel_index,
        app::Single__Array* samples,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, app::AkAudioInputManager_AudioSamplesDelegate* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::AkAudioInputManager_AudioSamplesDelegate
