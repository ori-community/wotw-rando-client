#pragma once
#include <Modloader/app/structs/XboxQualityModeManager.h>
#include <Modloader/app/structs/XboxQualityModeManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxQualityModeManager {
        inline app::XboxQualityModeManager__Class** type_info() {
            static app::XboxQualityModeManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxQualityModeManager__Class**)(modloader::win::memory::resolve_rva(0x04722410));
            }
            return cache;
        }
        inline app::XboxQualityModeManager__Class* get_class() {
            return il2cpp::get_class<app::XboxQualityModeManager__Class>(type_info(), "MoonDataPlatform", "XboxQualityModeManager");
        }
        inline app::XboxQualityModeManager* create() {
            return il2cpp::create_object<app::XboxQualityModeManager>(get_class());
        }
    } // namespace XboxQualityModeManager
} // namespace app::classes::types
