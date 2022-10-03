#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ApplyForceToPhysicsSystem_ExplosionSettings {
        namespace {
            app::ApplyForceToPhysicsSystem_ExplosionSettings__Class* type_info_ref = nullptr;
        }
        app::ApplyForceToPhysicsSystem_ExplosionSettings__Class** type_info = &type_info_ref;
        inline app::ApplyForceToPhysicsSystem_ExplosionSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::ApplyForceToPhysicsSystem_ExplosionSettings__Class>(type_info, "", "ApplyForceToPhysicsSystem", "ExplosionSettings");
        }
        inline app::ApplyForceToPhysicsSystem_ExplosionSettings* create() {
            return il2cpp::create_object<app::ApplyForceToPhysicsSystem_ExplosionSettings>(get_class());
        }
        inline app::ApplyForceToPhysicsSystem_ExplosionSettings__Boxed* box(app::ApplyForceToPhysicsSystem_ExplosionSettings value) {
            return il2cpp::box_value<app::ApplyForceToPhysicsSystem_ExplosionSettings__Boxed>(get_class(), value);
        }
    } // namespace ApplyForceToPhysicsSystem_ExplosionSettings
} // namespace app::classes::types
