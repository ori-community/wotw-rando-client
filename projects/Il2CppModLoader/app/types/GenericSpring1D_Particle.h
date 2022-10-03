#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericSpring1D_Particle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GenericSpring1D_Particle__Class** type_info;
        inline app::GenericSpring1D_Particle__Class* get_class() {
            return il2cpp::get_nested_class<app::GenericSpring1D_Particle__Class>(type_info, "", "GenericSpring1D", "Particle");
        }
        inline app::GenericSpring1D_Particle* create() {
            return il2cpp::create_object<app::GenericSpring1D_Particle>(get_class());
        }
    } // namespace GenericSpring1D_Particle
} // namespace app::classes::types
