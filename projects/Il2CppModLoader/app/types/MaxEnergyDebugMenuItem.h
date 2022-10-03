#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaxEnergyDebugMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MaxEnergyDebugMenuItem__Class** type_info;
        inline app::MaxEnergyDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::MaxEnergyDebugMenuItem__Class>(type_info, "", "MaxEnergyDebugMenuItem");
        }
        inline app::MaxEnergyDebugMenuItem* create() {
            return il2cpp::create_object<app::MaxEnergyDebugMenuItem>(get_class());
        }
    } // namespace MaxEnergyDebugMenuItem
} // namespace app::classes::types
