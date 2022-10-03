#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VRMainControlPanel_c_DisplayClass11_0 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VRMainControlPanel_c_DisplayClass11_0__Class** type_info;
        inline app::VRMainControlPanel_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::VRMainControlPanel_c_DisplayClass11_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "VRMainControlPanel", "<>c__DisplayClass11_0");
        }
        inline app::VRMainControlPanel_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::VRMainControlPanel_c_DisplayClass11_0>(get_class());
        }
    } // namespace VRMainControlPanel_c_DisplayClass11_0
} // namespace app::classes::types
