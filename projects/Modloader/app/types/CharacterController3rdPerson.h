#pragma once
#include <Modloader/app/structs/CharacterController3rdPerson.h>
#include <Modloader/app/structs/CharacterController3rdPerson__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterController3rdPerson {
        inline app::CharacterController3rdPerson__Class** type_info() {
            static app::CharacterController3rdPerson__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterController3rdPerson__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterController3rdPerson__Class* get_class() {
            return il2cpp::get_class<app::CharacterController3rdPerson__Class>(type_info(), "RootMotion.Demos", "CharacterController3rdPerson");
        }
        inline app::CharacterController3rdPerson* create() {
            return il2cpp::create_object<app::CharacterController3rdPerson>(get_class());
        }
    } // namespace CharacterController3rdPerson
} // namespace app::classes::types
