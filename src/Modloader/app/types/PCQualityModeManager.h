#pragma once
#include <Modloader/app/structs/PCQualityModeManager.h>
#include <Modloader/app/structs/PCQualityModeManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PCQualityModeManager {
        inline app::PCQualityModeManager__Class** type_info() {
            static app::PCQualityModeManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PCQualityModeManager__Class**)(modloader::win::memory::resolve_rva(0x0478A8D0));
            }
            return cache;
        }
        inline app::PCQualityModeManager__Class* get_class() {
            return il2cpp::get_class<app::PCQualityModeManager__Class>(type_info(), "MoonDataPlatform", "PCQualityModeManager");
        }
        inline app::PCQualityModeManager* create() {
            return il2cpp::create_object<app::PCQualityModeManager>(get_class());
        }
    } // namespace PCQualityModeManager
} // namespace app::classes::types
