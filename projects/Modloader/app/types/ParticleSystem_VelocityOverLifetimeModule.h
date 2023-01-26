#pragma once
#include <Modloader/app/structs/ParticleSystem_VelocityOverLifetimeModule.h>
#include <Modloader/app/structs/ParticleSystem_VelocityOverLifetimeModule__Boxed.h>
#include <Modloader/app/structs/ParticleSystem_VelocityOverLifetimeModule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_VelocityOverLifetimeModule {
        inline app::ParticleSystem_VelocityOverLifetimeModule__Class** type_info() {
            static app::ParticleSystem_VelocityOverLifetimeModule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystem_VelocityOverLifetimeModule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystem_VelocityOverLifetimeModule__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_VelocityOverLifetimeModule__Class>(type_info(), "UnityEngine", "ParticleSystem", "VelocityOverLifetimeModule");
        }
        inline app::ParticleSystem_VelocityOverLifetimeModule* create() {
            return il2cpp::create_object<app::ParticleSystem_VelocityOverLifetimeModule>(get_class());
        }
        inline app::ParticleSystem_VelocityOverLifetimeModule__Boxed* box(app::ParticleSystem_VelocityOverLifetimeModule value) {
            return il2cpp::box_value<app::ParticleSystem_VelocityOverLifetimeModule__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_VelocityOverLifetimeModule
} // namespace app::classes::types
