#pragma once
#include <Modloader/app/structs/ShurikenParticleAnimator.h>
#include <Modloader/app/structs/ShurikenParticleAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShurikenParticleAnimator {
        inline app::ShurikenParticleAnimator__Class** type_info() {
            static app::ShurikenParticleAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShurikenParticleAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShurikenParticleAnimator__Class* get_class() {
            return il2cpp::get_class<app::ShurikenParticleAnimator__Class>(type_info(), "", "ShurikenParticleAnimator");
        }
        inline app::ShurikenParticleAnimator* create() {
            return il2cpp::create_object<app::ShurikenParticleAnimator>(get_class());
        }
    } // namespace ShurikenParticleAnimator
} // namespace app::classes::types
