#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Windows::Speech::PhraseRecognitionSystem {
    IL2CPP_REGISTER_METHOD(0x02C7A070, void, PhraseRecognitionSystem_InvokeErrorEvent, (app::SpeechError__Enum error_code))
    IL2CPP_REGISTER_METHOD(0x02C7A110, void, PhraseRecognitionSystem_InvokeStatusChangedEvent, (app::SpeechSystemStatus__Enum status))
} // namespace app::classes::UnityEngine::Windows::Speech::PhraseRecognitionSystem
