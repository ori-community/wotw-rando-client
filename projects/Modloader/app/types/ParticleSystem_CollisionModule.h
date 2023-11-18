#pragma once
#include <Modloader/app/structs/ParticleSystem_CollisionModule.h>
#include <Modloader/app/structs/ParticleSystem_CollisionModule__Boxed.h>
#include <Modloader/app/structs/ParticleSystem_CollisionModule__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_CollisionModule {
        inline app::ParticleSystem_CollisionModule__Class** type_info() {
            static app::ParticleSystem_CollisionModule__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystem_CollisionModule__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystem_CollisionModule__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_CollisionModule__Class>(type_info(), "UnityEngine", "ParticleSystem", "CollisionModule");
        }
        inline app::ParticleSystem_CollisionModule* create() {
            return il2cpp::create_object<app::ParticleSystem_CollisionModule>(get_class());
        }
        inline app::ParticleSystem_CollisionModule__Boxed* box(app::ParticleSystem_CollisionModule value) {
            return il2cpp::box_value<app::ParticleSystem_CollisionModule__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_CollisionModule
} // namespace app::classes::types
