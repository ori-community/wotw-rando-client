#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WandererNPC_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WandererNPC_c__Class** type_info;
        inline app::WandererNPC_c__Class* get_class() {
            return il2cpp::get_nested_class<app::WandererNPC_c__Class>(type_info, "", "WandererNPC", "<>c");
        }
        inline app::WandererNPC_c* create() {
            return il2cpp::create_object<app::WandererNPC_c>(get_class());
        }
    } // namespace WandererNPC_c
} // namespace app::classes::types
