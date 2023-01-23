#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PhraseRecognizer_PhraseRecognizedDelegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PhraseRecognizedEventArgs.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::PhraseRecognizer_PhraseRecognizedDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x012DE680, void, Invoke, (app::PhraseRecognizer_PhraseRecognizedDelegate * this_ptr, app::PhraseRecognizedEventArgs args))
    IL2CPP_REGISTER_METHOD(0x02C7A960, app::IAsyncResult*, BeginInvoke, (app::PhraseRecognizer_PhraseRecognizedDelegate * this_ptr, app::PhraseRecognizedEventArgs args, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::PhraseRecognizer_PhraseRecognizedDelegate * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::UnityEngine::Windows::Speech::PhraseRecognizer_PhraseRecognizedDelegate
