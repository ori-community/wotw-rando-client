#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DictationRecognizer_DictationResultDelegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ConfidenceLevel__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DictationRecognizer_DictationResultDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02C11970, void, Invoke, (app::DictationRecognizer_DictationResultDelegate * this_ptr, app::String* text, app::ConfidenceLevel__Enum confidence))
    IL2CPP_REGISTER_METHOD(0x02C79FA0, app::IAsyncResult*, BeginInvoke, (app::DictationRecognizer_DictationResultDelegate * this_ptr, app::String* text, app::ConfidenceLevel__Enum confidence, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::DictationRecognizer_DictationResultDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Windows::Speech::DictationRecognizer_DictationResultDelegate
