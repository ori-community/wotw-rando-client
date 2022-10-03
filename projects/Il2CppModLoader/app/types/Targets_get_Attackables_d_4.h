#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Targets_get_Attackables_d_4 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Targets_get_Attackables_d_4__Class** type_info;
        inline app::Targets_get_Attackables_d_4__Class* get_class() {
            return il2cpp::get_nested_class<app::Targets_get_Attackables_d_4__Class>(type_info, "Game", "Targets", "<get_Attackables>d__4");
        }
        inline app::Targets_get_Attackables_d_4* create() {
            return il2cpp::create_object<app::Targets_get_Attackables_d_4>(get_class());
        }
    } // namespace Targets_get_Attackables_d_4
} // namespace app::classes::types
