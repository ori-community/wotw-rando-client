#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleCollisionEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParticleCollisionEvent__Class** type_info;
        inline app::ParticleCollisionEvent__Class* get_class() {
            return il2cpp::get_class<app::ParticleCollisionEvent__Class>(type_info, "UnityEngine", "ParticleCollisionEvent");
        }
        inline app::ParticleCollisionEvent* create() {
            return il2cpp::create_object<app::ParticleCollisionEvent>(get_class());
        }
        inline app::ParticleCollisionEvent__Boxed* box(app::ParticleCollisionEvent value) {
            return il2cpp::box_value<app::ParticleCollisionEvent__Boxed>(get_class(), value);
        }
        inline app::ParticleCollisionEvent__Array* create_array(int size) {
            return il2cpp::array_new<app::ParticleCollisionEvent__Array>(get_class(), size);
        }
    } // namespace ParticleCollisionEvent
} // namespace app::classes::types
