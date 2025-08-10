#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/DictationCompletionCause__Enum.h>
#include <Modloader/app/structs/DictationRecognizer_DictationCompletedDelegate.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::DictationRecognizer_DictationCompletedDelegate* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x01C77D40, void, Invoke, app::DictationRecognizer_DictationCompletedDelegate* this_ptr, app::DictationCompletionCause__Enum cause)
    IL2CPP_REGISTER_METHOD(
        0x02C79E10,
        app::IAsyncResult*,
        BeginInvoke,
        app::DictationRecognizer_DictationCompletedDelegate* this_ptr,
        app::DictationCompletionCause__Enum cause,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, app::DictationRecognizer_DictationCompletedDelegate* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::UnityEngine::Windows::Speech::DictationRecognizer_DictationCompletedDelegate
