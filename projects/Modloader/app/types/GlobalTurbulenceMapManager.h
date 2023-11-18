#pragma once
#include <Modloader/app/structs/GlobalTurbulenceMapManager.h>
#include <Modloader/app/structs/GlobalTurbulenceMapManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GlobalTurbulenceMapManager {
        inline app::GlobalTurbulenceMapManager__Class** type_info() {
            static app::GlobalTurbulenceMapManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GlobalTurbulenceMapManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GlobalTurbulenceMapManager__Class* get_class() {
            return il2cpp::get_class<app::GlobalTurbulenceMapManager__Class>(type_info(), "", "GlobalTurbulenceMapManager");
        }
        inline app::GlobalTurbulenceMapManager* create() {
            return il2cpp::create_object<app::GlobalTurbulenceMapManager>(get_class());
        }
    } // namespace GlobalTurbulenceMapManager
} // namespace app::classes::types
