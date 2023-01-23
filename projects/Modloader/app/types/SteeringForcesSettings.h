#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SteeringForcesSettings__Class.h>
#include <Modloader/app/structs/SteeringForcesSettings.h>

namespace app::classes::types {
    namespace SteeringForcesSettings {
        namespace {
            inline app::SteeringForcesSettings__Class* type_info_ref = nullptr;
        }
        inline app::SteeringForcesSettings__Class** type_info = &type_info_ref;
        inline app::SteeringForcesSettings__Class* get_class() {
            return il2cpp::get_class<app::SteeringForcesSettings__Class>(type_info, "", "SteeringForcesSettings");
        }
        inline app::SteeringForcesSettings* create() {
            return il2cpp::create_object<app::SteeringForcesSettings>(get_class());
        }
    } // namespace SteeringForcesSettings
} // namespace app::classes::types
