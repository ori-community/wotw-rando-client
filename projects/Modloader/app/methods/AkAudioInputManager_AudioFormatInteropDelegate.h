#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkAudioInputManager_AudioFormatInteropDelegate.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::AkAudioInputManager_AudioFormatInteropDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::AkAudioInputManager_AudioFormatInteropDelegate* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x015C22A0, void, Invoke, app::AkAudioInputManager_AudioFormatInteropDelegate* this_ptr, uint32_t playing_i_d, void* format)
    IL2CPP_REGISTER_METHOD(
        0x026C8380,
        app::IAsyncResult*,
        BeginInvoke,
        app::AkAudioInputManager_AudioFormatInteropDelegate* this_ptr,
        uint32_t playing_i_d,
        void* format,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::AkAudioInputManager_AudioFormatInteropDelegate* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::AkAudioInputManager_AudioFormatInteropDelegate
