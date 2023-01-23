#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PhraseRecognitionSystem_ErrorDelegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SpeechError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PhraseRecognitionSystem_ErrorDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, (app::PhraseRecognitionSystem_ErrorDelegate * this_ptr, app::SpeechError__Enum error_code))
    IL2CPP_REGISTER_METHOD(0x02C7A1B0, app::IAsyncResult*, BeginInvoke, (app::PhraseRecognitionSystem_ErrorDelegate * this_ptr, app::SpeechError__Enum error_code, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PhraseRecognitionSystem_ErrorDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Windows::Speech::PhraseRecognitionSystem_ErrorDelegate
