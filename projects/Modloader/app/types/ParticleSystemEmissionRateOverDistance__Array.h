#pragma once
#include <Modloader/app/structs/ParticleSystemEmissionRateOverDistance__Array.h>
#include <Modloader/app/structs/ParticleSystemEmissionRateOverDistance__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemEmissionRateOverDistance__Array {
        inline app::ParticleSystemEmissionRateOverDistance__Array__Class** type_info() {
            static app::ParticleSystemEmissionRateOverDistance__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystemEmissionRateOverDistance__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystemEmissionRateOverDistance__Array__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemEmissionRateOverDistance__Array__Class>(type_info(), "", "ParticleSystemEmissionRateOverDistance[]");
        }
        inline app::ParticleSystemEmissionRateOverDistance__Array* create() {
            return il2cpp::create_object<app::ParticleSystemEmissionRateOverDistance__Array>(get_class());
        }
    } // namespace ParticleSystemEmissionRateOverDistance__Array
} // namespace app::classes::types
