#pragma once
#include <Modloader/app/structs/CharacterThirdPerson.h>
#include <Modloader/app/structs/CharacterThirdPerson__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterThirdPerson {
        inline app::CharacterThirdPerson__Class** type_info() {
            static app::CharacterThirdPerson__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterThirdPerson__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterThirdPerson__Class* get_class() {
            return il2cpp::get_class<app::CharacterThirdPerson__Class>(type_info(), "RootMotion.Demos", "CharacterThirdPerson");
        }
        inline app::CharacterThirdPerson* create() {
            return il2cpp::create_object<app::CharacterThirdPerson>(get_class());
        }
    } // namespace CharacterThirdPerson
} // namespace app::classes::types
