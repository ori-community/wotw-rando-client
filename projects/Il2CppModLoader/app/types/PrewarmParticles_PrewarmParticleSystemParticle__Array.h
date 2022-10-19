#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrewarmParticles_PrewarmParticleSystemParticle__Array {
        inline app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class** type_info = (app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class**)(modloader::win::memory::resolve_rva(0x04745938));
        inline app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class* get_class() {
            return il2cpp::get_class<app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class>(type_info, "", "PrewarmParticles+PrewarmParticleSystemParticle[]");
        }
        inline app::PrewarmParticles_PrewarmParticleSystemParticle__Array* create() {
            return il2cpp::create_object<app::PrewarmParticles_PrewarmParticleSystemParticle__Array>(get_class());
        }
    } // namespace PrewarmParticles_PrewarmParticleSystemParticle__Array
} // namespace app::classes::types
