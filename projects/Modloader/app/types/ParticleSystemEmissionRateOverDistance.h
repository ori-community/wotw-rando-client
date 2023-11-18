#pragma once
#include <Modloader/app/structs/ParticleSystemEmissionRateOverDistance.h>
#include <Modloader/app/structs/ParticleSystemEmissionRateOverDistance__Array.h>
#include <Modloader/app/structs/ParticleSystemEmissionRateOverDistance__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemEmissionRateOverDistance {
        inline app::ParticleSystemEmissionRateOverDistance__Class** type_info() {
            static app::ParticleSystemEmissionRateOverDistance__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystemEmissionRateOverDistance__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystemEmissionRateOverDistance__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemEmissionRateOverDistance__Class>(type_info(), "", "ParticleSystemEmissionRateOverDistance");
        }
        inline app::ParticleSystemEmissionRateOverDistance* create() {
            return il2cpp::create_object<app::ParticleSystemEmissionRateOverDistance>(get_class());
        }
        inline app::ParticleSystemEmissionRateOverDistance__Array* create_array(int size) {
            return il2cpp::array_new<app::ParticleSystemEmissionRateOverDistance__Array>(get_class(), size);
        }
        inline app::ParticleSystemEmissionRateOverDistance__Array* create_array(const std::vector<app::ParticleSystemEmissionRateOverDistance*>& items) {
            return il2cpp::array_new<app::ParticleSystemEmissionRateOverDistance__Array>(get_class(), items);
        }
    } // namespace ParticleSystemEmissionRateOverDistance
} // namespace app::classes::types
