#pragma once
#include <Modloader/app/structs/LegacyParticleEmissionRateAnimator.h>
#include <Modloader/app/structs/LegacyParticleEmissionRateAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyParticleEmissionRateAnimator {
        inline app::LegacyParticleEmissionRateAnimator__Class** type_info() {
            static app::LegacyParticleEmissionRateAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyParticleEmissionRateAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyParticleEmissionRateAnimator__Class* get_class() {
            return il2cpp::get_class<app::LegacyParticleEmissionRateAnimator__Class>(type_info(), "", "LegacyParticleEmissionRateAnimator");
        }
        inline app::LegacyParticleEmissionRateAnimator* create() {
            return il2cpp::create_object<app::LegacyParticleEmissionRateAnimator>(get_class());
        }
    } // namespace LegacyParticleEmissionRateAnimator
} // namespace app::classes::types
