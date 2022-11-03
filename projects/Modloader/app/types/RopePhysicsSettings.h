#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RopePhysicsSettings {
        namespace {
            inline app::RopePhysicsSettings__Class* type_info_ref = nullptr;
        }
        inline app::RopePhysicsSettings__Class** type_info = &type_info_ref;
        inline app::RopePhysicsSettings__Class* get_class() {
            return il2cpp::get_class<app::RopePhysicsSettings__Class>(type_info, "", "RopePhysicsSettings");
        }
        inline app::RopePhysicsSettings* create() {
            return il2cpp::create_object<app::RopePhysicsSettings>(get_class());
        }
    } // namespace RopePhysicsSettings
} // namespace app::classes::types
