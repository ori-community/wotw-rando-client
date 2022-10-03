#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemExtensionsImpl {
        namespace {
            app::ParticleSystemExtensionsImpl__Class* type_info_ref = nullptr;
        }
        app::ParticleSystemExtensionsImpl__Class** type_info = &type_info_ref;
        inline app::ParticleSystemExtensionsImpl__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemExtensionsImpl__Class>(type_info, "UnityEngine", "ParticleSystemExtensionsImpl");
        }
        inline app::ParticleSystemExtensionsImpl* create() {
            return il2cpp::create_object<app::ParticleSystemExtensionsImpl>(get_class());
        }
    } // namespace ParticleSystemExtensionsImpl
} // namespace app::classes::types
