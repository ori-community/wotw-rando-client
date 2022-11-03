#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HUDManager {
        inline app::HUDManager__Class** type_info = (app::HUDManager__Class**)(modloader::win::memory::resolve_rva(0x0476FD48));
        inline app::HUDManager__Class* get_class() {
            return il2cpp::get_class<app::HUDManager__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "HUDManager");
        }
        inline app::HUDManager* create() {
            return il2cpp::create_object<app::HUDManager>(get_class());
        }
    } // namespace HUDManager
} // namespace app::classes::types
