#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystem_ForceOverLifetimeModule {
        namespace {
            inline app::ParticleSystem_ForceOverLifetimeModule__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystem_ForceOverLifetimeModule__Class** type_info = &type_info_ref;
        inline app::ParticleSystem_ForceOverLifetimeModule__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_ForceOverLifetimeModule__Class>(type_info, "UnityEngine", "ParticleSystem", "ForceOverLifetimeModule");
        }
        inline app::ParticleSystem_ForceOverLifetimeModule* create() {
            return il2cpp::create_object<app::ParticleSystem_ForceOverLifetimeModule>(get_class());
        }
        inline app::ParticleSystem_ForceOverLifetimeModule__Boxed* box(app::ParticleSystem_ForceOverLifetimeModule value) {
            return il2cpp::box_value<app::ParticleSystem_ForceOverLifetimeModule__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_ForceOverLifetimeModule
} // namespace app::classes::types
