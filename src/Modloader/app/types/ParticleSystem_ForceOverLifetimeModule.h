#pragma once
#include <Modloader/app/structs/ParticleSystem_ForceOverLifetimeModule.h>
#include <Modloader/app/structs/ParticleSystem_ForceOverLifetimeModule__Boxed.h>
#include <Modloader/app/structs/ParticleSystem_ForceOverLifetimeModule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_ForceOverLifetimeModule {
        inline app::ParticleSystem_ForceOverLifetimeModule__Class** type_info() {
            static app::ParticleSystem_ForceOverLifetimeModule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystem_ForceOverLifetimeModule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystem_ForceOverLifetimeModule__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_ForceOverLifetimeModule__Class>(type_info(), "UnityEngine", "ParticleSystem", "ForceOverLifetimeModule");
        }
        inline app::ParticleSystem_ForceOverLifetimeModule* create() {
            return il2cpp::create_object<app::ParticleSystem_ForceOverLifetimeModule>(get_class());
        }
        inline app::ParticleSystem_ForceOverLifetimeModule__Boxed* box(app::ParticleSystem_ForceOverLifetimeModule value) {
            return il2cpp::box_value<app::ParticleSystem_ForceOverLifetimeModule__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_ForceOverLifetimeModule
} // namespace app::classes::types
