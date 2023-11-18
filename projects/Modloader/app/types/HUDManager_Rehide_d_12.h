#pragma once
#include <Modloader/app/structs/HUDManager_Rehide_d_12.h>
#include <Modloader/app/structs/HUDManager_Rehide_d_12__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HUDManager_Rehide_d_12 {
        inline app::HUDManager_Rehide_d_12__Class** type_info() {
            static app::HUDManager_Rehide_d_12__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HUDManager_Rehide_d_12__Class**)(modloader::win::memory::resolve_rva(0x0475D4C8));
            }
            return cache;
        }
        inline app::HUDManager_Rehide_d_12__Class* get_class() {
            return il2cpp::get_nested_class<app::HUDManager_Rehide_d_12__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "HUDManager", "<Rehide>d__12");
        }
        inline app::HUDManager_Rehide_d_12* create() {
            return il2cpp::create_object<app::HUDManager_Rehide_d_12>(get_class());
        }
    } // namespace HUDManager_Rehide_d_12
} // namespace app::classes::types
