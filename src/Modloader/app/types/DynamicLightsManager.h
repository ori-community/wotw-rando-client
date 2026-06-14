#pragma once
#include <Modloader/app/structs/DynamicLightsManager.h>
#include <Modloader/app/structs/DynamicLightsManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicLightsManager {
        inline app::DynamicLightsManager__Class** type_info() {
            static app::DynamicLightsManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicLightsManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicLightsManager__Class* get_class() {
            return il2cpp::get_class<app::DynamicLightsManager__Class>(type_info(), "", "DynamicLightsManager");
        }
        inline app::DynamicLightsManager* create() {
            return il2cpp::create_object<app::DynamicLightsManager>(get_class());
        }
    } // namespace DynamicLightsManager
} // namespace app::classes::types
