#pragma once
#include <Modloader/app/structs/CharacterThirdPerson_MoveMode__Enum.h>
#include <Modloader/app/structs/CharacterThirdPerson_MoveMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharacterThirdPerson_MoveMode__Enum {
        inline app::CharacterThirdPerson_MoveMode__Enum__Class** type_info() {
            static app::CharacterThirdPerson_MoveMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharacterThirdPerson_MoveMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharacterThirdPerson_MoveMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterThirdPerson_MoveMode__Enum__Class>(type_info(), "RootMotion.Demos", "CharacterThirdPerson", "MoveMode");
        }
        inline app::CharacterThirdPerson_MoveMode__Enum* create() {
            return il2cpp::create_object<app::CharacterThirdPerson_MoveMode__Enum>(get_class());
        }
    } // namespace CharacterThirdPerson_MoveMode__Enum
} // namespace app::classes::types
