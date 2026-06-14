#pragma once
#include <Modloader/app/structs/ParticleSystem_Particle__Array.h>
#include <Modloader/app/structs/ParticleSystem_Particle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_Particle__Array {
        inline app::ParticleSystem_Particle__Array__Class** type_info() {
            static app::ParticleSystem_Particle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ParticleSystem_Particle__Array__Class**)(modloader::win::memory::resolve_rva(0x04753BE8));
            }
            return cache;
        }
        inline app::ParticleSystem_Particle__Array__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystem_Particle__Array__Class>(type_info(), "UnityEngine", "ParticleSystem+Particle[]");
        }
        inline app::ParticleSystem_Particle__Array* create() {
            return il2cpp::create_object<app::ParticleSystem_Particle__Array>(get_class());
        }
    } // namespace ParticleSystem_Particle__Array
} // namespace app::classes::types
