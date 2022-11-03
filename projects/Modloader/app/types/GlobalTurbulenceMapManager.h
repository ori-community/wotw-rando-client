#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GlobalTurbulenceMapManager {
        namespace {
            inline app::GlobalTurbulenceMapManager__Class* type_info_ref = nullptr;
        }
        inline app::GlobalTurbulenceMapManager__Class** type_info = &type_info_ref;
        inline app::GlobalTurbulenceMapManager__Class* get_class() {
            return il2cpp::get_class<app::GlobalTurbulenceMapManager__Class>(type_info, "", "GlobalTurbulenceMapManager");
        }
        inline app::GlobalTurbulenceMapManager* create() {
            return il2cpp::create_object<app::GlobalTurbulenceMapManager>(get_class());
        }
    } // namespace GlobalTurbulenceMapManager
} // namespace app::classes::types
