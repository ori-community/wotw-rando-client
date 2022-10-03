#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LegacyParticleEmissionRateAnimator {
        namespace {
            app::LegacyParticleEmissionRateAnimator__Class* type_info_ref = nullptr;
        }
        app::LegacyParticleEmissionRateAnimator__Class** type_info = &type_info_ref;
        inline app::LegacyParticleEmissionRateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyParticleEmissionRateAnimator__Class>(type_info, "", "LegacyParticleEmissionRateAnimator");
        }
        inline app::LegacyParticleEmissionRateAnimator* create() {
            return il2cpp::create_object<app::LegacyParticleEmissionRateAnimator>(get_class());
        }
    } // namespace LegacyParticleEmissionRateAnimator
} // namespace app::classes::types
