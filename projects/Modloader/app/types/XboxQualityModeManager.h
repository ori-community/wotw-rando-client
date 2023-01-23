#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxQualityModeManager__Class.h>
#include <Modloader/app/structs/XboxQualityModeManager.h>

namespace app::classes::types {
    namespace XboxQualityModeManager {
        inline app::XboxQualityModeManager__Class** type_info = (app::XboxQualityModeManager__Class**)(modloader::win::memory::resolve_rva(0x04722410));
        inline app::XboxQualityModeManager__Class* get_class() {
            return il2cpp::get_class<app::XboxQualityModeManager__Class>(type_info, "MoonDataPlatform", "XboxQualityModeManager");
        }
        inline app::XboxQualityModeManager* create() {
            return il2cpp::create_object<app::XboxQualityModeManager>(get_class());
        }
    } // namespace XboxQualityModeManager
} // namespace app::classes::types
