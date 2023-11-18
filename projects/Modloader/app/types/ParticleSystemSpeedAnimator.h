#pragma once
#include <Modloader/app/structs/ParticleSystemSpeedAnimator.h>
#include <Modloader/app/structs/ParticleSystemSpeedAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemSpeedAnimator {
        inline app::ParticleSystemSpeedAnimator__Class** type_info() {
            static app::ParticleSystemSpeedAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystemSpeedAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystemSpeedAnimator__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemSpeedAnimator__Class>(type_info(), "", "ParticleSystemSpeedAnimator");
        }
        inline app::ParticleSystemSpeedAnimator* create() {
            return il2cpp::create_object<app::ParticleSystemSpeedAnimator>(get_class());
        }
    } // namespace ParticleSystemSpeedAnimator
} // namespace app::classes::types
