#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystemVelocityAnimator {
        namespace {
            inline app::ParticleSystemVelocityAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystemVelocityAnimator__Class** type_info = &type_info_ref;
        inline app::ParticleSystemVelocityAnimator__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemVelocityAnimator__Class>(type_info, "", "ParticleSystemVelocityAnimator");
        }
        inline app::ParticleSystemVelocityAnimator* create() {
            return il2cpp::create_object<app::ParticleSystemVelocityAnimator>(get_class());
        }
    } // namespace ParticleSystemVelocityAnimator
} // namespace app::classes::types
