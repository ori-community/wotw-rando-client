#pragma once
#include <Modloader/app/structs/VRMainControlPanel.h>
#include <Modloader/app/structs/VRMainControlPanel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VRMainControlPanel {
        inline app::VRMainControlPanel__Class** type_info() {
            static app::VRMainControlPanel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VRMainControlPanel__Class**)(modloader::win::memory::resolve_rva(0x047286C0));
            }
            return cache;
        }
        inline app::VRMainControlPanel__Class* get_class() {
            return il2cpp::get_class<app::VRMainControlPanel__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "VRMainControlPanel");
        }
        inline app::VRMainControlPanel* create() {
            return il2cpp::create_object<app::VRMainControlPanel>(get_class());
        }
    } // namespace VRMainControlPanel
} // namespace app::classes::types
