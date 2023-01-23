#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocomotionUtils_CollisionAvoidanceSettings__Class.h>
#include <Modloader/app/structs/LocomotionUtils_CollisionAvoidanceSettings.h>
#include <Modloader/app/structs/LocomotionUtils_CollisionAvoidanceSettings__Boxed.h>

namespace app::classes::types {
    namespace LocomotionUtils_CollisionAvoidanceSettings {
        namespace {
            inline app::LocomotionUtils_CollisionAvoidanceSettings__Class* type_info_ref = nullptr;
        }
        inline app::LocomotionUtils_CollisionAvoidanceSettings__Class** type_info = &type_info_ref;
        inline app::LocomotionUtils_CollisionAvoidanceSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::LocomotionUtils_CollisionAvoidanceSettings__Class>(type_info, "", "LocomotionUtils", "CollisionAvoidanceSettings");
        }
        inline app::LocomotionUtils_CollisionAvoidanceSettings* create() {
            return il2cpp::create_object<app::LocomotionUtils_CollisionAvoidanceSettings>(get_class());
        }
        inline app::LocomotionUtils_CollisionAvoidanceSettings__Boxed* box(app::LocomotionUtils_CollisionAvoidanceSettings value) {
            return il2cpp::box_value<app::LocomotionUtils_CollisionAvoidanceSettings__Boxed>(get_class(), value);
        }
    } // namespace LocomotionUtils_CollisionAvoidanceSettings
} // namespace app::classes::types
