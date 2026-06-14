#pragma once
#include <Modloader/app/structs/CharacterGlow.h>
#include <Modloader/app/structs/CharacterGlow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterGlow {
        inline app::CharacterGlow__Class** type_info() {
            static app::CharacterGlow__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterGlow__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterGlow__Class* get_class() {
            return il2cpp::get_class<app::CharacterGlow__Class>(type_info(), "", "CharacterGlow");
        }
        inline app::CharacterGlow* create() {
            return il2cpp::create_object<app::CharacterGlow>(get_class());
        }
    } // namespace CharacterGlow
} // namespace app::classes::types
