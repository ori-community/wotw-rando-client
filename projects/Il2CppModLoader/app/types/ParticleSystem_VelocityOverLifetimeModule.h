#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_VelocityOverLifetimeModule {
        namespace {
            app::ParticleSystem_VelocityOverLifetimeModule__Class* type_info_ref = nullptr;
        }
        app::ParticleSystem_VelocityOverLifetimeModule__Class** type_info = &type_info_ref;
        inline app::ParticleSystem_VelocityOverLifetimeModule__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_VelocityOverLifetimeModule__Class>(type_info, "UnityEngine", "ParticleSystem", "VelocityOverLifetimeModule");
        }
        inline app::ParticleSystem_VelocityOverLifetimeModule* create() {
            return il2cpp::create_object<app::ParticleSystem_VelocityOverLifetimeModule>(get_class());
        }
        inline app::ParticleSystem_VelocityOverLifetimeModule__Boxed* box(app::ParticleSystem_VelocityOverLifetimeModule value) {
            return il2cpp::box_value<app::ParticleSystem_VelocityOverLifetimeModule__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_VelocityOverLifetimeModule
} // namespace app::classes::types
