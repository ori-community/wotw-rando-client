#pragma once
#include <Modloader/app/structs/DepthOfFieldAnimator.h>
#include <Modloader/app/structs/DepthOfFieldAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DepthOfFieldAnimator {
        inline app::DepthOfFieldAnimator__Class** type_info() {
            static app::DepthOfFieldAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DepthOfFieldAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DepthOfFieldAnimator__Class* get_class() {
            return il2cpp::get_class<app::DepthOfFieldAnimator__Class>(type_info(), "", "DepthOfFieldAnimator");
        }
        inline app::DepthOfFieldAnimator* create() {
            return il2cpp::create_object<app::DepthOfFieldAnimator>(get_class());
        }
    } // namespace DepthOfFieldAnimator
} // namespace app::classes::types
