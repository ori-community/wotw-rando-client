#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenariosParticleSystemAnimator {
        namespace {
            inline app::ScenariosParticleSystemAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ScenariosParticleSystemAnimator__Class** type_info = &type_info_ref;
        inline app::ScenariosParticleSystemAnimator__Class* get_class() {
            return il2cpp::get_class<app::ScenariosParticleSystemAnimator__Class>(type_info, "Moon.Timeline", "ScenariosParticleSystemAnimator");
        }
        inline app::ScenariosParticleSystemAnimator* create() {
            return il2cpp::create_object<app::ScenariosParticleSystemAnimator>(get_class());
        }
    } // namespace ScenariosParticleSystemAnimator
} // namespace app::classes::types
