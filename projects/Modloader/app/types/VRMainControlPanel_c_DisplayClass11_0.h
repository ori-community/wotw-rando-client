#pragma once
#include <Modloader/app/structs/VRMainControlPanel_c_DisplayClass11_0.h>
#include <Modloader/app/structs/VRMainControlPanel_c_DisplayClass11_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VRMainControlPanel_c_DisplayClass11_0 {
        inline app::VRMainControlPanel_c_DisplayClass11_0__Class** type_info() {
            static app::VRMainControlPanel_c_DisplayClass11_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VRMainControlPanel_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x04787A70));
            }
            return cache;
        }
        inline app::VRMainControlPanel_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::VRMainControlPanel_c_DisplayClass11_0__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "VRMainControlPanel", "<>c__DisplayClass11_0");
        }
        inline app::VRMainControlPanel_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::VRMainControlPanel_c_DisplayClass11_0>(get_class());
        }
    } // namespace VRMainControlPanel_c_DisplayClass11_0
} // namespace app::classes::types
