#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnvironmentLightingManager__Class.h>
#include <Modloader/app/structs/EnvironmentLightingManager.h>

namespace app::classes::types {
    namespace EnvironmentLightingManager {
        inline app::EnvironmentLightingManager__Class** type_info = (app::EnvironmentLightingManager__Class**)(modloader::win::memory::resolve_rva(0x0477C950));
        inline app::EnvironmentLightingManager__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLightingManager__Class>(type_info, "", "EnvironmentLightingManager");
        }
        inline app::EnvironmentLightingManager* create() {
            return il2cpp::create_object<app::EnvironmentLightingManager>(get_class());
        }
    } // namespace EnvironmentLightingManager
} // namespace app::classes::types
