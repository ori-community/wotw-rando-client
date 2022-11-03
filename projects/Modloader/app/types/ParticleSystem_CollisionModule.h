#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystem_CollisionModule {
        namespace {
            inline app::ParticleSystem_CollisionModule__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystem_CollisionModule__Class** type_info = &type_info_ref;
        inline app::ParticleSystem_CollisionModule__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_CollisionModule__Class>(type_info, "UnityEngine", "ParticleSystem", "CollisionModule");
        }
        inline app::ParticleSystem_CollisionModule* create() {
            return il2cpp::create_object<app::ParticleSystem_CollisionModule>(get_class());
        }
        inline app::ParticleSystem_CollisionModule__Boxed* box(app::ParticleSystem_CollisionModule value) {
            return il2cpp::box_value<app::ParticleSystem_CollisionModule__Boxed>(get_class(), value);
        }
    } // namespace ParticleSystem_CollisionModule
} // namespace app::classes::types
