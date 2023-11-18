#pragma once
#include <Modloader/app/structs/ApplyForceToPhysicsSystem_ExplosionSettings.h>
#include <Modloader/app/structs/ApplyForceToPhysicsSystem_ExplosionSettings__Boxed.h>
#include <Modloader/app/structs/ApplyForceToPhysicsSystem_ExplosionSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ApplyForceToPhysicsSystem_ExplosionSettings {
        inline app::ApplyForceToPhysicsSystem_ExplosionSettings__Class** type_info() {
            static app::ApplyForceToPhysicsSystem_ExplosionSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ApplyForceToPhysicsSystem_ExplosionSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ApplyForceToPhysicsSystem_ExplosionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ApplyForceToPhysicsSystem_ExplosionSettings__Class>(type_info(), "", "ApplyForceToPhysicsSystem", "ExplosionSettings");
        }
        inline app::ApplyForceToPhysicsSystem_ExplosionSettings* create() {
            return il2cpp::create_object<app::ApplyForceToPhysicsSystem_ExplosionSettings>(get_class());
        }
        inline app::ApplyForceToPhysicsSystem_ExplosionSettings__Boxed* box(app::ApplyForceToPhysicsSystem_ExplosionSettings value) {
            return il2cpp::box_value<app::ApplyForceToPhysicsSystem_ExplosionSettings__Boxed>(get_class(), value);
        }
    } // namespace ApplyForceToPhysicsSystem_ExplosionSettings
} // namespace app::classes::types
