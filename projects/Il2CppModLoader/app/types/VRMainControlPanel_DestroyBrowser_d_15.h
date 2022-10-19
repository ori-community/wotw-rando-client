#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VRMainControlPanel_DestroyBrowser_d_15 {
        inline app::VRMainControlPanel_DestroyBrowser_d_15__Class** type_info = (app::VRMainControlPanel_DestroyBrowser_d_15__Class**)(modloader::win::memory::resolve_rva(0x047404A0));
        inline app::VRMainControlPanel_DestroyBrowser_d_15__Class* get_class() {
            return il2cpp::get_nested_class<app::VRMainControlPanel_DestroyBrowser_d_15__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "VRMainControlPanel", "<_DestroyBrowser>d__15");
        }
        inline app::VRMainControlPanel_DestroyBrowser_d_15* create() {
            return il2cpp::create_object<app::VRMainControlPanel_DestroyBrowser_d_15>(get_class());
        }
    } // namespace VRMainControlPanel_DestroyBrowser_d_15
} // namespace app::classes::types
