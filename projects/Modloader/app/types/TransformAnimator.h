#pragma once
#include <Modloader/app/structs/TransformAnimator.h>
#include <Modloader/app/structs/TransformAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformAnimator {
        inline app::TransformAnimator__Class** type_info() {
            static app::TransformAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformAnimator__Class* get_class() {
            return il2cpp::get_class<app::TransformAnimator__Class>(type_info(), "", "TransformAnimator");
        }
        inline app::TransformAnimator* create() {
            return il2cpp::create_object<app::TransformAnimator>(get_class());
        }
    } // namespace TransformAnimator
} // namespace app::classes::types
