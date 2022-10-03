#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemEmissionRateOverDistance__Array {
        namespace {
            app::ParticleSystemEmissionRateOverDistance__Array__Class* type_info_ref = nullptr;
        }
        app::ParticleSystemEmissionRateOverDistance__Array__Class** type_info = &type_info_ref;
        inline app::ParticleSystemEmissionRateOverDistance__Array__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemEmissionRateOverDistance__Array__Class>(type_info, "", "ParticleSystemEmissionRateOverDistance[]");
        }
        inline app::ParticleSystemEmissionRateOverDistance__Array* create() {
            return il2cpp::create_object<app::ParticleSystemEmissionRateOverDistance__Array>(get_class());
        }
    } // namespace ParticleSystemEmissionRateOverDistance__Array
} // namespace app::classes::types
