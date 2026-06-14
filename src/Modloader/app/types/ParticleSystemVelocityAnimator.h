#pragma once
#include <Modloader/app/structs/ParticleSystemVelocityAnimator.h>
#include <Modloader/app/structs/ParticleSystemVelocityAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemVelocityAnimator {
        inline app::ParticleSystemVelocityAnimator__Class** type_info() {
            static app::ParticleSystemVelocityAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystemVelocityAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystemVelocityAnimator__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemVelocityAnimator__Class>(type_info(), "", "ParticleSystemVelocityAnimator");
        }
        inline app::ParticleSystemVelocityAnimator* create() {
            return il2cpp::create_object<app::ParticleSystemVelocityAnimator>(get_class());
        }
    } // namespace ParticleSystemVelocityAnimator
} // namespace app::classes::types
