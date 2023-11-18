#pragma once
#include <Modloader/app/structs/CharacterGravity.h>
#include <Modloader/app/structs/CharacterGravity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterGravity {
        inline app::CharacterGravity__Class** type_info() {
            static app::CharacterGravity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterGravity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterGravity__Class* get_class() {
            return il2cpp::get_class<app::CharacterGravity__Class>(type_info(), "", "CharacterGravity");
        }
        inline app::CharacterGravity* create() {
            return il2cpp::create_object<app::CharacterGravity>(get_class());
        }
    } // namespace CharacterGravity
} // namespace app::classes::types
