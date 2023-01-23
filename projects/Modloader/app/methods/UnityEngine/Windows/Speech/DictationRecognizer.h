#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DictationRecognizer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/ConfidenceLevel__Enum.h>
#include <Modloader/app/structs/DictationCompletionCause__Enum.h>

namespace app::classes::UnityEngine::Windows::Speech::DictationRecognizer {
    IL2CPP_REGISTER_METHOD(0x02C79AB0, void, Destroy, (void* self))
    IL2CPP_REGISTER_METHOD(0x02C79B00, void, DestroyThreaded, (void* self))
    IL2CPP_REGISTER_METHOD(0x02C79B50, void, Finalize, (app::DictationRecognizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C79C90, void, Dispose, (app::DictationRecognizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02C79D90, void, DictationRecognizer_InvokeHypothesisGeneratedEvent, (app::DictationRecognizer * this_ptr, app::String* keyword))
    IL2CPP_REGISTER_METHOD(0x02C79DB0, void, DictationRecognizer_InvokeResultGeneratedEvent, (app::DictationRecognizer * this_ptr, app::String* keyword, app::ConfidenceLevel__Enum minimum_confidence))
    IL2CPP_REGISTER_METHOD(0x02C79DD0, void, DictationRecognizer_InvokeCompletedEvent, (app::DictationRecognizer * this_ptr, app::DictationCompletionCause__Enum cause))
    IL2CPP_REGISTER_METHOD(0x02C79DF0, void, DictationRecognizer_InvokeErrorEvent, (app::DictationRecognizer * this_ptr, app::String* error, int32_t hresult))
} // namespace app::classes::UnityEngine::Windows::Speech::DictationRecognizer
