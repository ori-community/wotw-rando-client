#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ParticleSystem__Class** type_info;
        inline app::ParticleSystem__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystem__Class>(type_info, "UnityEngine", "ParticleSystem");
        }
        inline app::ParticleSystem* create() {
            return il2cpp::create_object<app::ParticleSystem>(get_class());
        }
        inline app::ParticleSystem__Array* create_array(int size) {
            return il2cpp::array_new<app::ParticleSystem__Array>(get_class(), size);
        }
        inline app::ParticleSystem__Array* create_array(const std::vector<app::ParticleSystem*>& items) {
            return il2cpp::array_new<app::ParticleSystem__Array>(get_class(), items);
        }
    } // namespace ParticleSystem
} // namespace app::classes::types
