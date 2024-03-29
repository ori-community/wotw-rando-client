#pragma once
#include <Modloader/app/structs/GenericSpring1D_Particle.h>
#include <Modloader/app/structs/GenericSpring1D_Particle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GenericSpring1D_Particle {
        inline app::GenericSpring1D_Particle__Class** type_info() {
            static app::GenericSpring1D_Particle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GenericSpring1D_Particle__Class**)(modloader::win::memory::resolve_rva(0x0473E368));
            }
            return cache;
        }
        inline app::GenericSpring1D_Particle__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericSpring1D_Particle__Class>(type_info(), "", "GenericSpring1D", "Particle");
        }
        inline app::GenericSpring1D_Particle* create() {
            return il2cpp::create_object<app::GenericSpring1D_Particle>(get_class());
        }
    } // namespace GenericSpring1D_Particle
} // namespace app::classes::types
