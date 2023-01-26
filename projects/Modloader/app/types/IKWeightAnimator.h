#pragma once
#include <Modloader/app/structs/IKWeightAnimator.h>
#include <Modloader/app/structs/IKWeightAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKWeightAnimator {
        inline app::IKWeightAnimator__Class** type_info() {
            static app::IKWeightAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IKWeightAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IKWeightAnimator__Class* get_class() {
            return il2cpp::get_class<app::IKWeightAnimator__Class>(type_info(), "Moon.Timeline", "IKWeightAnimator");
        }
        inline app::IKWeightAnimator* create() {
            return il2cpp::create_object<app::IKWeightAnimator>(get_class());
        }
    } // namespace IKWeightAnimator
} // namespace app::classes::types
