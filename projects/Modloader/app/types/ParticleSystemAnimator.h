#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParticleSystemAnimator {
        namespace {
            inline app::ParticleSystemAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ParticleSystemAnimator__Class** type_info = &type_info_ref;
        inline app::ParticleSystemAnimator__Class* get_class() {
            return il2cpp::get_class<app::ParticleSystemAnimator__Class>(type_info, "Moon.Timeline", "ParticleSystemAnimator");
        }
        inline app::ParticleSystemAnimator* create() {
            return il2cpp::create_object<app::ParticleSystemAnimator>(get_class());
        }
    } // namespace ParticleSystemAnimator
} // namespace app::classes::types
