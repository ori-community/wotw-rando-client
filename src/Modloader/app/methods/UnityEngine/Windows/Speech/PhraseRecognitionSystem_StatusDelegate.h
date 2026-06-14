#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PhraseRecognitionSystem_StatusDelegate.h>
#include <Modloader/app/structs/SpeechSystemStatus__Enum.h>

namespace app::classes::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::PhraseRecognitionSystem_StatusDelegate* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, app::PhraseRecognitionSystem_StatusDelegate* this_ptr, app::SpeechSystemStatus__Enum status)
    IL2CPP_REGISTER_METHOD(
        0x02C7A270,
        app::IAsyncResult*,
        BeginInvoke,
        app::PhraseRecognitionSystem_StatusDelegate* this_ptr,
        app::SpeechSystemStatus__Enum status,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::PhraseRecognitionSystem_StatusDelegate* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::Windows::Speech::PhraseRecognitionSystem_StatusDelegate
