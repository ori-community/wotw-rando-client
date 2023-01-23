#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InverseKinematicsSettings__Class.h>
#include <Modloader/app/structs/InverseKinematicsSettings.h>

namespace app::classes::types {
    namespace InverseKinematicsSettings {
        namespace {
            inline app::InverseKinematicsSettings__Class* type_info_ref = nullptr;
        }
        inline app::InverseKinematicsSettings__Class** type_info = &type_info_ref;
        inline app::InverseKinematicsSettings__Class* get_class() {
            return il2cpp::get_class<app::InverseKinematicsSettings__Class>(type_info, "Moon", "InverseKinematicsSettings");
        }
        inline app::InverseKinematicsSettings* create() {
            return il2cpp::create_object<app::InverseKinematicsSettings>(get_class());
        }
    } // namespace InverseKinematicsSettings
} // namespace app::classes::types
