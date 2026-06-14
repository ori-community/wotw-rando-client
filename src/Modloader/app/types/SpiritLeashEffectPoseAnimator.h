#pragma once
#include <Modloader/app/structs/SpiritLeashEffectPoseAnimator.h>
#include <Modloader/app/structs/SpiritLeashEffectPoseAnimator__Array.h>
#include <Modloader/app/structs/SpiritLeashEffectPoseAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashEffectPoseAnimator {
        inline app::SpiritLeashEffectPoseAnimator__Class** type_info() {
            static app::SpiritLeashEffectPoseAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritLeashEffectPoseAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritLeashEffectPoseAnimator__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashEffectPoseAnimator__Class>(type_info(), "", "SpiritLeashEffectPoseAnimator");
        }
        inline app::SpiritLeashEffectPoseAnimator* create() {
            return il2cpp::create_object<app::SpiritLeashEffectPoseAnimator>(get_class());
        }
        inline app::SpiritLeashEffectPoseAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiritLeashEffectPoseAnimator__Array>(get_class(), size);
        }
        inline app::SpiritLeashEffectPoseAnimator__Array* create_array(const std::vector<app::SpiritLeashEffectPoseAnimator*>& items) {
            return il2cpp::array_new<app::SpiritLeashEffectPoseAnimator__Array>(get_class(), items);
        }
    } // namespace SpiritLeashEffectPoseAnimator
} // namespace app::classes::types
