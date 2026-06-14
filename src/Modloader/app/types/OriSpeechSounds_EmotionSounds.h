#pragma once
#include <Modloader/app/structs/OriSpeechSounds_EmotionSounds.h>
#include <Modloader/app/structs/OriSpeechSounds_EmotionSounds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriSpeechSounds_EmotionSounds {
        inline app::OriSpeechSounds_EmotionSounds__Class** type_info() {
            static app::OriSpeechSounds_EmotionSounds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriSpeechSounds_EmotionSounds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriSpeechSounds_EmotionSounds__Class* get_class() {
            return il2cpp::get_nested_class<app::OriSpeechSounds_EmotionSounds__Class>(type_info(), "", "OriSpeechSounds", "EmotionSounds");
        }
        inline app::OriSpeechSounds_EmotionSounds* create() {
            return il2cpp::create_object<app::OriSpeechSounds_EmotionSounds>(get_class());
        }
    } // namespace OriSpeechSounds_EmotionSounds
} // namespace app::classes::types
