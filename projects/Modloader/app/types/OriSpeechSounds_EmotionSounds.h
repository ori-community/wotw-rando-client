#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OriSpeechSounds_EmotionSounds__Class.h>
#include <Modloader/app/structs/OriSpeechSounds_EmotionSounds.h>

namespace app::classes::types {
    namespace OriSpeechSounds_EmotionSounds {
        namespace {
            inline app::OriSpeechSounds_EmotionSounds__Class* type_info_ref = nullptr;
        }
        inline app::OriSpeechSounds_EmotionSounds__Class** type_info = &type_info_ref;
        inline app::OriSpeechSounds_EmotionSounds__Class* get_class() {
            return il2cpp::get_nested_class<app::OriSpeechSounds_EmotionSounds__Class>(type_info, "", "OriSpeechSounds", "EmotionSounds");
        }
        inline app::OriSpeechSounds_EmotionSounds* create() {
            return il2cpp::create_object<app::OriSpeechSounds_EmotionSounds>(get_class());
        }
    } // namespace OriSpeechSounds_EmotionSounds
} // namespace app::classes::types
