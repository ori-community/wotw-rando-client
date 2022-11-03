#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrewarmParticles_PrewarmParticleSystemParticle {
        inline app::PrewarmParticles_PrewarmParticleSystemParticle__Class** type_info = (app::PrewarmParticles_PrewarmParticleSystemParticle__Class**)(modloader::win::memory::resolve_rva(0x04782330));
        inline app::PrewarmParticles_PrewarmParticleSystemParticle__Class* get_class() {
            return il2cpp::get_nested_class<app::PrewarmParticles_PrewarmParticleSystemParticle__Class>(type_info, "", "PrewarmParticles", "PrewarmParticleSystemParticle");
        }
        inline app::PrewarmParticles_PrewarmParticleSystemParticle* create() {
            return il2cpp::create_object<app::PrewarmParticles_PrewarmParticleSystemParticle>(get_class());
        }
        inline app::PrewarmParticles_PrewarmParticleSystemParticle__Array* create_array(int size) {
            return il2cpp::array_new<app::PrewarmParticles_PrewarmParticleSystemParticle__Array>(get_class(), size);
        }
        inline app::PrewarmParticles_PrewarmParticleSystemParticle__Array* create_array(const std::vector<app::PrewarmParticles_PrewarmParticleSystemParticle*>& items) {
            return il2cpp::array_new<app::PrewarmParticles_PrewarmParticleSystemParticle__Array>(get_class(), items);
        }
    } // namespace PrewarmParticles_PrewarmParticleSystemParticle
} // namespace app::classes::types
