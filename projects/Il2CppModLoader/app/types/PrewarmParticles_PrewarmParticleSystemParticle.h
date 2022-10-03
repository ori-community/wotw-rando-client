#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PrewarmParticles_PrewarmParticleSystemParticle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PrewarmParticles_PrewarmParticleSystemParticle__Class** type_info;
        inline app::PrewarmParticles_PrewarmParticleSystemParticle__Class* get_class() {
            return il2cpp::get_nested_class<app::PrewarmParticles_PrewarmParticleSystemParticle__Class>(type_info, "", "PrewarmParticles", "PrewarmParticleSystemParticle");
        }
        inline app::PrewarmParticles_PrewarmParticleSystemParticle* create() {
            return il2cpp::create_object<app::PrewarmParticles_PrewarmParticleSystemParticle>(get_class());
        }
        inline app::PrewarmParticles_PrewarmParticleSystemParticle__Array* create_array(int size) {
            return il2cpp::array_new<app::PrewarmParticles_PrewarmParticleSystemParticle__Array>(get_class(), size);
        }
    } // namespace PrewarmParticles_PrewarmParticleSystemParticle
} // namespace app::classes::types
