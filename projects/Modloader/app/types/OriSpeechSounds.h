#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OriSpeechSounds__Class.h>
#include <Modloader/app/structs/OriSpeechSounds.h>

namespace app::classes::types {
    namespace OriSpeechSounds {
        namespace {
            inline app::OriSpeechSounds__Class* type_info_ref = nullptr;
        }
        inline app::OriSpeechSounds__Class** type_info = &type_info_ref;
        inline app::OriSpeechSounds__Class* get_class() {
            return il2cpp::get_class<app::OriSpeechSounds__Class>(type_info, "", "OriSpeechSounds");
        }
        inline app::OriSpeechSounds* create() {
            return il2cpp::create_object<app::OriSpeechSounds>(get_class());
        }
    } // namespace OriSpeechSounds
} // namespace app::classes::types
