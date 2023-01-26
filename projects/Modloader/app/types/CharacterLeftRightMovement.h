#pragma once
#include <Modloader/app/structs/CharacterLeftRightMovement.h>
#include <Modloader/app/structs/CharacterLeftRightMovement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterLeftRightMovement {
        inline app::CharacterLeftRightMovement__Class** type_info() {
            static app::CharacterLeftRightMovement__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterLeftRightMovement__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterLeftRightMovement__Class* get_class() {
            return il2cpp::get_class<app::CharacterLeftRightMovement__Class>(type_info(), "", "CharacterLeftRightMovement");
        }
        inline app::CharacterLeftRightMovement* create() {
            return il2cpp::create_object<app::CharacterLeftRightMovement>(get_class());
        }
    } // namespace CharacterLeftRightMovement
} // namespace app::classes::types
