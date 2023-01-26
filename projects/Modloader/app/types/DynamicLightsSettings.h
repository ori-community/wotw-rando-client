#pragma once
#include <Modloader/app/structs/DynamicLightsSettings.h>
#include <Modloader/app/structs/DynamicLightsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicLightsSettings {
        inline app::DynamicLightsSettings__Class** type_info() {
            static app::DynamicLightsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicLightsSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicLightsSettings__Class* get_class() {
            return il2cpp::get_class<app::DynamicLightsSettings__Class>(type_info(), "", "DynamicLightsSettings");
        }
        inline app::DynamicLightsSettings* create() {
            return il2cpp::create_object<app::DynamicLightsSettings>(get_class());
        }
    } // namespace DynamicLightsSettings
} // namespace app::classes::types
