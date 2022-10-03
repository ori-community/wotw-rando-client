#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterFactory_Characters__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterFactory_Characters__Enum__Class** type_info;
        inline app::CharacterFactory_Characters__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CharacterFactory_Characters__Enum__Class>(type_info, "", "CharacterFactory", "Characters");
        }
        inline app::CharacterFactory_Characters__Enum* create() {
            return il2cpp::create_object<app::CharacterFactory_Characters__Enum>(get_class());
        }
    } // namespace CharacterFactory_Characters__Enum
} // namespace app::classes::types
