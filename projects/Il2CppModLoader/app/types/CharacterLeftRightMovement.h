#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterLeftRightMovement {
        namespace {
            app::CharacterLeftRightMovement__Class* type_info_ref = nullptr;
        }
        app::CharacterLeftRightMovement__Class** type_info = &type_info_ref;
        inline app::CharacterLeftRightMovement__Class* get_class() {
            return il2cpp::get_class<app::CharacterLeftRightMovement__Class>(type_info, "", "CharacterLeftRightMovement");
        }
        inline app::CharacterLeftRightMovement* create() {
            return il2cpp::create_object<app::CharacterLeftRightMovement>(get_class());
        }
    } // namespace CharacterLeftRightMovement
} // namespace app::classes::types
