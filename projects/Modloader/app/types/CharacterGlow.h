#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CharacterGlow__Class.h>
#include <Modloader/app/structs/CharacterGlow.h>

namespace app::classes::types {
    namespace CharacterGlow {
        namespace {
            inline app::CharacterGlow__Class* type_info_ref = nullptr;
        }
        inline app::CharacterGlow__Class** type_info = &type_info_ref;
        inline app::CharacterGlow__Class* get_class() {
            return il2cpp::get_class<app::CharacterGlow__Class>(type_info, "", "CharacterGlow");
        }
        inline app::CharacterGlow* create() {
            return il2cpp::create_object<app::CharacterGlow>(get_class());
        }
    } // namespace CharacterGlow
} // namespace app::classes::types
