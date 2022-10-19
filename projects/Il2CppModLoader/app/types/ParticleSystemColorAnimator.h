#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystemColorAnimator {
        namespace {
            inline app::ParticleSystemColorAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystemColorAnimator__Class** type_info = &type_info_ref;
        inline app::ParticleSystemColorAnimator__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemColorAnimator__Class>(type_info, "", "ParticleSystemColorAnimator");
        }
        inline app::ParticleSystemColorAnimator* create() {
            return il2cpp::create_object<app::ParticleSystemColorAnimator>(get_class());
        }
    } // namespace ParticleSystemColorAnimator
} // namespace app::classes::types
