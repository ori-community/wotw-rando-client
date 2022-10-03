#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InverseKinematicsSettings {
        namespace {
            app::InverseKinematicsSettings__Class* type_info_ref = nullptr;
        }
        app::InverseKinematicsSettings__Class** type_info = &type_info_ref;
        inline app::InverseKinematicsSettings__Class* get_class() {
            return il2cpp::get_class<app::InverseKinematicsSettings__Class>(type_info, "Moon", "InverseKinematicsSettings");
        }
        inline app::InverseKinematicsSettings* create() {
            return il2cpp::create_object<app::InverseKinematicsSettings>(get_class());
        }
    } // namespace InverseKinematicsSettings
} // namespace app::classes::types
