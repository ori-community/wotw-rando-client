#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EntityAvatar {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EntityAvatar__Class** type_info;
        inline app::EntityAvatar__Class* get_class() {
            return il2cpp::get_class<app::EntityAvatar__Class>(type_info, "", "EntityAvatar");
        }
        inline app::EntityAvatar* create() {
            return il2cpp::create_object<app::EntityAvatar>(get_class());
        }
    } // namespace EntityAvatar
} // namespace app::classes::types
