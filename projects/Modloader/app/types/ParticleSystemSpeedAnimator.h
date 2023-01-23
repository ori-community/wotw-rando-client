#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ParticleSystemSpeedAnimator__Class.h>
#include <Modloader/app/structs/ParticleSystemSpeedAnimator.h>

namespace app::classes::types {
    namespace ParticleSystemSpeedAnimator {
        namespace {
            inline app::ParticleSystemSpeedAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystemSpeedAnimator__Class** type_info = &type_info_ref;
        inline app::ParticleSystemSpeedAnimator__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemSpeedAnimator__Class>(type_info, "", "ParticleSystemSpeedAnimator");
        }
        inline app::ParticleSystemSpeedAnimator* create() {
            return il2cpp::create_object<app::ParticleSystemSpeedAnimator>(get_class());
        }
    } // namespace ParticleSystemSpeedAnimator
} // namespace app::classes::types
