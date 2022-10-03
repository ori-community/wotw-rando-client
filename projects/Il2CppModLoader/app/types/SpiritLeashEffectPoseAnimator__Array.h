#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLeashEffectPoseAnimator__Array {
        namespace {
            app::SpiritLeashEffectPoseAnimator__Array__Class* type_info_ref = nullptr;
        }
        app::SpiritLeashEffectPoseAnimator__Array__Class** type_info = &type_info_ref;
        inline app::SpiritLeashEffectPoseAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritLeashEffectPoseAnimator__Array__Class>(type_info, "", "SpiritLeashEffectPoseAnimator[]");
        }
        inline app::SpiritLeashEffectPoseAnimator__Array* create() {
            return il2cpp::create_object<app::SpiritLeashEffectPoseAnimator__Array>(get_class());
        }
    } // namespace SpiritLeashEffectPoseAnimator__Array
} // namespace app::classes::types
