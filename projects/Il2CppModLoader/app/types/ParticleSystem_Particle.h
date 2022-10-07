#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_Particle {
        namespace {
            app::ParticleSystem_Particle__Class* type_info_ref = nullptr;
        }
        app::ParticleSystem_Particle__Class** type_info = &type_info_ref;
        inline app::ParticleSystem_Particle__Class* get_class() {
            return il2cpp::get_nested_class<app::ParticleSystem_Particle__Class>(type_info, "UnityEngine", "ParticleSystem", "Particle");
        }
        inline app::ParticleSystem_Particle* create() {
            return il2cpp::create_object<app::ParticleSystem_Particle>(get_class());
        }
        inline app::ParticleSystem_Particle__Boxed* box(app::ParticleSystem_Particle value) {
            return il2cpp::box_value<app::ParticleSystem_Particle__Boxed>(get_class(), value);
        }
        inline app::ParticleSystem_Particle__Array* create_array(int size) {
            return il2cpp::array_new<app::ParticleSystem_Particle__Array>(get_class(), size);
        }
        inline app::ParticleSystem_Particle__Array* create_array(const std::vector<app::ParticleSystem_Particle>& items) {
            return il2cpp::array_new<app::ParticleSystem_Particle__Array>(get_class(), items);
        }
    } // namespace ParticleSystem_Particle
} // namespace app::classes::types
