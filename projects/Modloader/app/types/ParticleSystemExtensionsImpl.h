#pragma once
#include <Modloader/app/structs/ParticleSystemExtensionsImpl.h>
#include <Modloader/app/structs/ParticleSystemExtensionsImpl__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemExtensionsImpl {
        inline app::ParticleSystemExtensionsImpl__Class** type_info() {
            static app::ParticleSystemExtensionsImpl__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystemExtensionsImpl__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystemExtensionsImpl__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemExtensionsImpl__Class>(type_info(), "UnityEngine", "ParticleSystemExtensionsImpl");
        }
        inline app::ParticleSystemExtensionsImpl* create() {
            return il2cpp::create_object<app::ParticleSystemExtensionsImpl>(get_class());
        }
    } // namespace ParticleSystemExtensionsImpl
} // namespace app::classes::types
