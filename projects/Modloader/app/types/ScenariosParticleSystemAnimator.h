#pragma once
#include <Modloader/app/structs/ScenariosParticleSystemAnimator.h>
#include <Modloader/app/structs/ScenariosParticleSystemAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenariosParticleSystemAnimator {
        inline app::ScenariosParticleSystemAnimator__Class** type_info() {
            static app::ScenariosParticleSystemAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenariosParticleSystemAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenariosParticleSystemAnimator__Class* get_class() {
            return il2cpp::get_class<app::ScenariosParticleSystemAnimator__Class>(type_info(), "Moon.Timeline", "ScenariosParticleSystemAnimator");
        }
        inline app::ScenariosParticleSystemAnimator* create() {
            return il2cpp::create_object<app::ScenariosParticleSystemAnimator>(get_class());
        }
    } // namespace ScenariosParticleSystemAnimator
} // namespace app::classes::types
