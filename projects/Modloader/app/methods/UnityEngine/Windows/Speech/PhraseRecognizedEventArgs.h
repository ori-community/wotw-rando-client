#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs {
    IL2CPP_REGISTER_METHOD(0x00229CA0, void, ctor, (app::PhraseRecognizedEventArgs__Boxed * this_ptr, app::String* text, app::ConfidenceLevel__Enum confidence, app::SemanticMeaning__Array* semantic_meanings, app::DateTime phrase_start_time, app::TimeSpan phrase_duration))
}
