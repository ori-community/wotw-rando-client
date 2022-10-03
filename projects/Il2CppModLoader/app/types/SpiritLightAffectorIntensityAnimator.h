#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLightAffectorIntensityAnimator {
        namespace {
            app::SpiritLightAffectorIntensityAnimator__Class* type_info_ref = nullptr;
        }
        app::SpiritLightAffectorIntensityAnimator__Class** type_info = &type_info_ref;
        inline app::SpiritLightAffectorIntensityAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightAffectorIntensityAnimator__Class>(type_info, "", "SpiritLightAffectorIntensityAnimator");
        }
        inline app::SpiritLightAffectorIntensityAnimator* create() {
            return il2cpp::create_object<app::SpiritLightAffectorIntensityAnimator>(get_class());
        }
    } // namespace SpiritLightAffectorIntensityAnimator
} // namespace app::classes::types
