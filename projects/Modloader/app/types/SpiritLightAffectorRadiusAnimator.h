#pragma once
#include <Modloader/app/structs/SpiritLightAffectorRadiusAnimator.h>
#include <Modloader/app/structs/SpiritLightAffectorRadiusAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLightAffectorRadiusAnimator {
        inline app::SpiritLightAffectorRadiusAnimator__Class** type_info() {
            static app::SpiritLightAffectorRadiusAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLightAffectorRadiusAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLightAffectorRadiusAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightAffectorRadiusAnimator__Class>(type_info(), "", "SpiritLightAffectorRadiusAnimator");
        }
        inline app::SpiritLightAffectorRadiusAnimator* create() {
            return il2cpp::create_object<app::SpiritLightAffectorRadiusAnimator>(get_class());
        }
    } // namespace SpiritLightAffectorRadiusAnimator
} // namespace app::classes::types
