#pragma once
#include <Modloader/app/structs/RopePhysicsSettings.h>
#include <Modloader/app/structs/RopePhysicsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RopePhysicsSettings {
        inline app::RopePhysicsSettings__Class** type_info() {
            static app::RopePhysicsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RopePhysicsSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RopePhysicsSettings__Class* get_class() {
            return il2cpp::get_class<app::RopePhysicsSettings__Class>(type_info(), "", "RopePhysicsSettings");
        }
        inline app::RopePhysicsSettings* create() {
            return il2cpp::create_object<app::RopePhysicsSettings>(get_class());
        }
    } // namespace RopePhysicsSettings
} // namespace app::classes::types
