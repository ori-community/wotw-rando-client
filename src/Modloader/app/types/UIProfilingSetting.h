#pragma once
#include <Modloader/app/structs/UIProfilingSetting.h>
#include <Modloader/app/structs/UIProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UIProfilingSetting {
        inline app::UIProfilingSetting__Class** type_info() {
            static app::UIProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UIProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UIProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::UIProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "UIProfilingSetting");
        }
        inline app::UIProfilingSetting* create() {
            return il2cpp::create_object<app::UIProfilingSetting>(get_class());
        }
    } // namespace UIProfilingSetting
} // namespace app::classes::types
