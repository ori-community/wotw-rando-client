#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/AudioClip_PCMReaderCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::UnityEngine::AudioClip_PCMReaderCallback {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::AudioClip_PCMReaderCallback* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, app::AudioClip_PCMReaderCallback* this_ptr, app::Single__Array* data)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::AudioClip_PCMReaderCallback* this_ptr,
        app::Single__Array* data,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::AudioClip_PCMReaderCallback* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::AudioClip_PCMReaderCallback
