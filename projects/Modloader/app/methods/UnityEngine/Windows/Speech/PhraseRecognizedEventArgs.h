#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PhraseRecognizedEventArgs__Boxed.h>
#include <Modloader/app/structs/ConfidenceLevel__Enum.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/SemanticMeaning__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>

namespace app::classes::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs {
    IL2CPP_REGISTER_METHOD(0x00229CA0, void, ctor, (app::PhraseRecognizedEventArgs__Boxed * this_ptr, app::String* text, app::ConfidenceLevel__Enum confidence, app::SemanticMeaning__Array* semantic_meanings, app::DateTime phrase_start_time, app::TimeSpan phrase_duration))
}
