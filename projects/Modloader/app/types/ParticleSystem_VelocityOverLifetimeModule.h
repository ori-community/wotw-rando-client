#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystem_VelocityOverLifetimeModule {
        namespace {
            inline app::ParticleSystem_VelocityOverLifetimeModule__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystem_VelocityOverLifetimeModule__Class** type_info = &type_info_ref;
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
