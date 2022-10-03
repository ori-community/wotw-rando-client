#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriSpeechSounds {
        namespace {
            app::OriSpeechSounds__Class* type_info_ref = nullptr;
        }
        app::OriSpeechSounds__Class** type_info = &type_info_ref;
        inline app::OriSpeechSounds__Class* get_class() {
            return il2cpp::get_class<app::OriSpeechSounds__Class>(type_info, "", "OriSpeechSounds");
        }
        inline app::OriSpeechSounds* create() {
            return il2cpp::create_object<app::OriSpeechSounds>(get_class());
        }
    } // namespace OriSpeechSounds
} // namespace app::classes::types
