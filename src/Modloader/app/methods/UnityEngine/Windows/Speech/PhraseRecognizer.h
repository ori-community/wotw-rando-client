#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfidenceLevel__Enum.h>
#include <Modloader/app/structs/PhraseRecognizer.h>
#include <Modloader/app/structs/SemanticMeaning__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::Windows::Speech::PhraseRecognizer {
    IL2CPP_REGISTER_METHOD(0x02C7A330, void, Destroy, void* recognizer)
    IL2CPP_REGISTER_METHOD(0x02C7A380, void, DestroyThreaded, void* recognizer)
    IL2CPP_REGISTER_METHOD(0x02C7A3D0, void, Finalize, app::PhraseRecognizer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02C7A510, void, Dispose, app::PhraseRecognizer* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02C7A610,
        void,
        InvokePhraseRecognizedEvent,
        app::PhraseRecognizer* this_ptr,
        app::String* text,
        app::ConfidenceLevel__Enum confidence,
        app::SemanticMeaning__Array* semantic_meanings,
        int64_t phrase_start_file_time,
        int64_t phrase_duration_ticks
    )
    IL2CPP_REGISTER_METHOD(0x02C7A770, app::SemanticMeaning__Array*, MarshalSemanticMeaning, void* keys, void* values, void* value_sizes, int32_t value_count)
} // namespace app::classes::UnityEngine::Windows::Speech::PhraseRecognizer
