#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterController3rdPerson {
        namespace {
            app::CharacterController3rdPerson__Class* type_info_ref = nullptr;
        }
        app::CharacterController3rdPerson__Class** type_info = &type_info_ref;
        inline app::CharacterController3rdPerson__Class* get_class() {
            return il2cpp::get_class<app::CharacterController3rdPerson__Class>(type_info, "RootMotion.Demos", "CharacterController3rdPerson");
        }
        inline app::CharacterController3rdPerson* create() {
            return il2cpp::create_object<app::CharacterController3rdPerson>(get_class());
        }
    } // namespace CharacterController3rdPerson
} // namespace app::classes::types
