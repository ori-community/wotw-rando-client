#pragma once
#include <Modloader/app/structs/PrewarmParticles_PrewarmParticleSystemParticle__Array.h>
#include <Modloader/app/structs/PrewarmParticles_PrewarmParticleSystemParticle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PrewarmParticles_PrewarmParticleSystemParticle__Array {
        inline app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class** type_info() {
            static app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class**)(modloader::win::memory::resolve_rva(0x04745938));
            }
            return cache;
        }
        inline app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class* get_class() {
            return il2cpp::get_class<app::PrewarmParticles_PrewarmParticleSystemParticle__Array__Class>(type_info(), "", "PrewarmParticles+PrewarmParticleSystemParticle[]");
        }
        inline app::PrewarmParticles_PrewarmParticleSystemParticle__Array* create() {
            return il2cpp::create_object<app::PrewarmParticles_PrewarmParticleSystemParticle__Array>(get_class());
        }
    } // namespace PrewarmParticles_PrewarmParticleSystemParticle__Array
} // namespace app::classes::types
