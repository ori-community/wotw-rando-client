#pragma once
#include <Modloader/app/structs/SpiritLightAffectorIntensityAnimator.h>
#include <Modloader/app/structs/SpiritLightAffectorIntensityAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightAffectorIntensityAnimator {
        inline app::SpiritLightAffectorIntensityAnimator__Class** type_info() {
            static app::SpiritLightAffectorIntensityAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLightAffectorIntensityAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLightAffectorIntensityAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightAffectorIntensityAnimator__Class>(type_info(), "", "SpiritLightAffectorIntensityAnimator");
        }
        inline app::SpiritLightAffectorIntensityAnimator* create() {
            return il2cpp::create_object<app::SpiritLightAffectorIntensityAnimator>(get_class());
        }
    } // namespace SpiritLightAffectorIntensityAnimator
} // namespace app::classes::types
