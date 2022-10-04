#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICharacter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICharacter__Class** type_info;
        inline app::ICharacter__Class* get_class() {
            return il2cpp::get_class<app::ICharacter__Class>(type_info, "", "ICharacter");
        }
    } // namespace ICharacter
} // namespace app::classes::types
