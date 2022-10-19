#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace VRMainControlPanel_c_DisplayClass10_0 {
        inline app::VRMainControlPanel_c_DisplayClass10_0__Class** type_info = (app::VRMainControlPanel_c_DisplayClass10_0__Class**)(modloader::win::memory::resolve_rva(0x04733920));
        inline app::VRMainControlPanel_c_DisplayClass10_0__Class* get_class() {
            return il2cpp::get_nested_class<app::VRMainControlPanel_c_DisplayClass10_0__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "VRMainControlPanel", "<>c__DisplayClass10_0");
        }
        inline app::VRMainControlPanel_c_DisplayClass10_0* create() {
            return il2cpp::create_object<app::VRMainControlPanel_c_DisplayClass10_0>(get_class());
        }
    } // namespace VRMainControlPanel_c_DisplayClass10_0
} // namespace app::classes::types
