#pragma once
#include <Modloader/app/structs/CharacterGravityToGround.h>
#include <Modloader/app/structs/CharacterGravityToGround__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterGravityToGround {
        inline app::CharacterGravityToGround__Class** type_info() {
            static app::CharacterGravityToGround__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterGravityToGround__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterGravityToGround__Class* get_class() {
            return il2cpp::get_class<app::CharacterGravityToGround__Class>(type_info(), "", "CharacterGravityToGround");
        }
        inline app::CharacterGravityToGround* create() {
            return il2cpp::create_object<app::CharacterGravityToGround>(get_class());
        }
    } // namespace CharacterGravityToGround
} // namespace app::classes::types
