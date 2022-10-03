#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem_Burst__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParticleSystem_Burst__Array__Class** type_info;
        inline app::ParticleSystem_Burst__Array__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystem_Burst__Array__Class>(type_info, "UnityEngine", "ParticleSystem+Burst[]");
        }
        inline app::ParticleSystem_Burst__Array* create() {
            return il2cpp::create_object<app::ParticleSystem_Burst__Array>(get_class());
        }
    } // namespace ParticleSystem_Burst__Array
} // namespace app::classes::types
