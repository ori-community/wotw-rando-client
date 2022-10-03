#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WandererNPC {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WandererNPC__Class** type_info;
        inline app::WandererNPC__Class* get_class() {
            return il2cpp::get_class<app::WandererNPC__Class>(type_info, "", "WandererNPC");
        }
        inline app::WandererNPC* create() {
            return il2cpp::create_object<app::WandererNPC>(get_class());
        }
    } // namespace WandererNPC
} // namespace app::classes::types
