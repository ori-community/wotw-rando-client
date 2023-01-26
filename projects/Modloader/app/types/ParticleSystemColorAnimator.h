#pragma once
#include <Modloader/app/structs/ParticleSystemColorAnimator.h>
#include <Modloader/app/structs/ParticleSystemColorAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemColorAnimator {
        inline app::ParticleSystemColorAnimator__Class** type_info() {
            static app::ParticleSystemColorAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystemColorAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystemColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemColorAnimator__Class>(type_info(), "", "ParticleSystemColorAnimator");
        }
        inline app::ParticleSystemColorAnimator* create() {
            return il2cpp::create_object<app::ParticleSystemColorAnimator>(get_class());
        }
    } // namespace ParticleSystemColorAnimator
} // namespace app::classes::types
