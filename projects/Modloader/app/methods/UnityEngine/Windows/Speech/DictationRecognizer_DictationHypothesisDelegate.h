#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DictationRecognizer_DictationHypothesisDelegate.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::DictationRecognizer_DictationHypothesisDelegate* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, app::DictationRecognizer_DictationHypothesisDelegate* this_ptr, app::String* text)
    IL2CPP_REGISTER_METHOD(
        0x00674080,
        app::IAsyncResult*,
        BeginInvoke,
        app::DictationRecognizer_DictationHypothesisDelegate* this_ptr,
        app::String* text,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::DictationRecognizer_DictationHypothesisDelegate* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::Windows::Speech::DictationRecognizer_DictationHypothesisDelegate
