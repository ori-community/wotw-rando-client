#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleCollisionEvent {
        inline app::ParticleCollisionEvent__Class** type_info = (app::ParticleCollisionEvent__Class**)(modloader::win::memory::resolve_rva(0x04754D60));
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
        inline app::ParticleCollisionEvent__Array* create_array(const std::vector<app::ParticleCollisionEvent>& items) {
            return il2cpp::array_new<app::ParticleCollisionEvent__Array>(get_class(), items);
        }
    } // namespace ParticleCollisionEvent
} // namespace app::classes::types
