#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DashableSwitchVisuals {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DashableSwitchVisuals__Class** type_info;
        inline app::DashableSwitchVisuals__Class* get_class() {
            return il2cpp::get_class<app::DashableSwitchVisuals__Class>(type_info, "", "DashableSwitchVisuals");
        }
        inline app::DashableSwitchVisuals* create() {
            return il2cpp::create_object<app::DashableSwitchVisuals>(get_class());
        }
    } // namespace DashableSwitchVisuals
} // namespace app::classes::types
