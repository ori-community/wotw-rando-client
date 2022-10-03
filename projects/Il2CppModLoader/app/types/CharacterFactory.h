#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CharacterFactory {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CharacterFactory__Class** type_info;
        inline app::CharacterFactory__Class* get_class() {
            return il2cpp::get_class<app::CharacterFactory__Class>(type_info, "", "CharacterFactory");
        }
        inline app::CharacterFactory* create() {
            return il2cpp::create_object<app::CharacterFactory>(get_class());
        }
    } // namespace CharacterFactory
} // namespace app::classes::types
