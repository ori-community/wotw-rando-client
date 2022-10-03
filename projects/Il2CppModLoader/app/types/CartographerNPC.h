#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CartographerNPC {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CartographerNPC__Class** type_info;
        inline app::CartographerNPC__Class* get_class() {
            return il2cpp::get_class<app::CartographerNPC__Class>(type_info, "", "CartographerNPC");
        }
        inline app::CartographerNPC* create() {
            return il2cpp::create_object<app::CartographerNPC>(get_class());
        }
    } // namespace CartographerNPC
} // namespace app::classes::types
