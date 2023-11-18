#pragma once
#include <Modloader/app/structs/DistortionAnimator.h>
#include <Modloader/app/structs/DistortionAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DistortionAnimator {
        inline app::DistortionAnimator__Class** type_info() {
            static app::DistortionAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DistortionAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DistortionAnimator__Class* get_class() {
            return il2cpp::get_class<app::DistortionAnimator__Class>(type_info(), "", "DistortionAnimator");
        }
        inline app::DistortionAnimator* create() {
            return il2cpp::create_object<app::DistortionAnimator>(get_class());
        }
    } // namespace DistortionAnimator
} // namespace app::classes::types
