#pragma once
#include <Modloader/app/structs/OriSpeechSounds.h>
#include <Modloader/app/structs/OriSpeechSounds__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriSpeechSounds {
        inline app::OriSpeechSounds__Class** type_info() {
            static app::OriSpeechSounds__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriSpeechSounds__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriSpeechSounds__Class* get_class() {
            return il2cpp::get_class<app::OriSpeechSounds__Class>(type_info(), "", "OriSpeechSounds");
        }
        inline app::OriSpeechSounds* create() {
            return il2cpp::create_object<app::OriSpeechSounds>(get_class());
        }
    } // namespace OriSpeechSounds
} // namespace app::classes::types
