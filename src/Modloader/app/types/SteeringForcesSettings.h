#pragma once
#include <Modloader/app/structs/SteeringForcesSettings.h>
#include <Modloader/app/structs/SteeringForcesSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SteeringForcesSettings {
        inline app::SteeringForcesSettings__Class** type_info() {
            static app::SteeringForcesSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SteeringForcesSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SteeringForcesSettings__Class* get_class() {
            return il2cpp::get_class<app::SteeringForcesSettings__Class>(type_info(), "", "SteeringForcesSettings");
        }
        inline app::SteeringForcesSettings* create() {
            return il2cpp::create_object<app::SteeringForcesSettings>(get_class());
        }
    } // namespace SteeringForcesSettings
} // namespace app::classes::types
