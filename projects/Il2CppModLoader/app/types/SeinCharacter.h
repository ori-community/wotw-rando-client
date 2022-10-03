#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinCharacter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinCharacter__Class** type_info;
        inline app::SeinCharacter__Class* get_class() {
            return il2cpp::get_class<app::SeinCharacter__Class>(type_info, "", "SeinCharacter");
        }
        inline app::SeinCharacter* create() {
            return il2cpp::create_object<app::SeinCharacter>(get_class());
        }
    } // namespace SeinCharacter
} // namespace app::classes::types
