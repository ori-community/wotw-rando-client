#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_Particle__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParticleSystem_Particle__Array__Class** type_info;
        inline app::ParticleSystem_Particle__Array__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystem_Particle__Array__Class>(type_info, "UnityEngine", "ParticleSystem+Particle[]");
        }
        inline app::ParticleSystem_Particle__Array* create() {
            return il2cpp::create_object<app::ParticleSystem_Particle__Array>(get_class());
        }
    } // namespace ParticleSystem_Particle__Array
} // namespace app::classes::types
