#pragma once
#include <Modloader/app/structs/InverseKinematicsSettings.h>
#include <Modloader/app/structs/InverseKinematicsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InverseKinematicsSettings {
        inline app::InverseKinematicsSettings__Class** type_info() {
            static app::InverseKinematicsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InverseKinematicsSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InverseKinematicsSettings__Class* get_class() {
            return il2cpp::get_class<app::InverseKinematicsSettings__Class>(type_info(), "Moon", "InverseKinematicsSettings");
        }
        inline app::InverseKinematicsSettings* create() {
            return il2cpp::create_object<app::InverseKinematicsSettings>(get_class());
        }
    } // namespace InverseKinematicsSettings
} // namespace app::classes::types
