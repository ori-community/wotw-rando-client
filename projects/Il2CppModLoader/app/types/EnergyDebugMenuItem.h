#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnergyDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnergyDebugMenuItem__Class** type_info;
        inline app::EnergyDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::EnergyDebugMenuItem__Class>(type_info, "", "EnergyDebugMenuItem");
        }
        inline app::EnergyDebugMenuItem* create() {
            return il2cpp::create_object<app::EnergyDebugMenuItem>(get_class());
        }
    } // namespace EnergyDebugMenuItem
} // namespace app::classes::types
