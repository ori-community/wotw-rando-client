#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClickMeshBrowserUI {
        inline app::ClickMeshBrowserUI__Class** type_info = (app::ClickMeshBrowserUI__Class**)(modloader::win::memory::resolve_rva(0x047903C0));
        inline app::ClickMeshBrowserUI__Class* get_class() {
            return il2cpp::get_class<app::ClickMeshBrowserUI__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "ClickMeshBrowserUI");
        }
        inline app::ClickMeshBrowserUI* create() {
            return il2cpp::create_object<app::ClickMeshBrowserUI>(get_class());
        }
    } // namespace ClickMeshBrowserUI
} // namespace app::classes::types
