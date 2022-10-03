#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ParticleSystemSpeedAnimator {
        namespace {
            app::ParticleSystemSpeedAnimator__Class* type_info_ref = nullptr;
        }
        app::ParticleSystemSpeedAnimator__Class** type_info = &type_info_ref;
        inline app::ParticleSystemSpeedAnimator__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemSpeedAnimator__Class>(type_info, "", "ParticleSystemSpeedAnimator");
        }
        inline app::ParticleSystemSpeedAnimator* create() {
            return il2cpp::create_object<app::ParticleSystemSpeedAnimator>(get_class());
        }
    } // namespace ParticleSystemSpeedAnimator
} // namespace app::classes::types
