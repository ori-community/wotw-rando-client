#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace VRMainControlPanel {
        extern IL2CPP_MODLOADER_DLLEXPORT app::VRMainControlPanel__Class** type_info;
        inline app::VRMainControlPanel__Class* get_class() {
            return il2cpp::get_class<app::VRMainControlPanel__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "VRMainControlPanel");
        }
        inline app::VRMainControlPanel* create() {
            return il2cpp::create_object<app::VRMainControlPanel>(get_class());
        }
    } // namespace VRMainControlPanel
} // namespace app::classes::types
