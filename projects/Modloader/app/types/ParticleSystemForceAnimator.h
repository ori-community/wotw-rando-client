#pragma once
#include <Modloader/app/structs/ParticleSystemForceAnimator.h>
#include <Modloader/app/structs/ParticleSystemForceAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemForceAnimator {
        inline app::ParticleSystemForceAnimator__Class** type_info() {
            static app::ParticleSystemForceAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystemForceAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystemForceAnimator__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemForceAnimator__Class>(type_info(), "", "ParticleSystemForceAnimator");
        }
        inline app::ParticleSystemForceAnimator* create() {
            return il2cpp::create_object<app::ParticleSystemForceAnimator>(get_class());
        }
    } // namespace ParticleSystemForceAnimator
} // namespace app::classes::types
