#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterController {
        namespace {
            app::CharacterController__Class* type_info_ref = nullptr;
        }
        app::CharacterController__Class** type_info = &type_info_ref;
        inline app::CharacterController__Class* get_class() {
            return il2cpp::get_class<app::CharacterController__Class>(type_info, "UnityEngine", "CharacterController");
        }
        inline app::CharacterController* create() {
            return il2cpp::create_object<app::CharacterController>(get_class());
        }
    } // namespace CharacterController
} // namespace app::classes::types
