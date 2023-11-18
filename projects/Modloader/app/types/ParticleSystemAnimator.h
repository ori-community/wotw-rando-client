#pragma once
#include <Modloader/app/structs/ParticleSystemAnimator.h>
#include <Modloader/app/structs/ParticleSystemAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemAnimator {
        inline app::ParticleSystemAnimator__Class** type_info() {
            static app::ParticleSystemAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ParticleSystemAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ParticleSystemAnimator__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemAnimator__Class>(type_info(), "Moon.Timeline", "ParticleSystemAnimator");
        }
        inline app::ParticleSystemAnimator* create() {
            return il2cpp::create_object<app::ParticleSystemAnimator>(get_class());
        }
    } // namespace ParticleSystemAnimator
} // namespace app::classes::types
