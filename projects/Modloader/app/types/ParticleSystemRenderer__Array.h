#pragma once
#include <Modloader/app/structs/ParticleSystemRenderer__Array.h>
#include <Modloader/app/structs/ParticleSystemRenderer__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemRenderer__Array {
        inline app::ParticleSystemRenderer__Array__Class** type_info() {
            static app::ParticleSystemRenderer__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystemRenderer__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystemRenderer__Array__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemRenderer__Array__Class>(type_info(), "UnityEngine", "ParticleSystemRenderer[]");
        }
        inline app::ParticleSystemRenderer__Array* create() {
            return il2cpp::create_object<app::ParticleSystemRenderer__Array>(get_class());
        }
    } // namespace ParticleSystemRenderer__Array
} // namespace app::classes::types
