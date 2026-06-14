#pragma once
#include <Modloader/app/structs/ScaleAnimator.h>
#include <Modloader/app/structs/ScaleAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaleAnimator {
        inline app::ScaleAnimator__Class** type_info() {
            static app::ScaleAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaleAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaleAnimator__Class* get_class() {
            return il2cpp::get_class<app::ScaleAnimator__Class>(type_info(), "", "ScaleAnimator");
        }
        inline app::ScaleAnimator* create() {
            return il2cpp::create_object<app::ScaleAnimator>(get_class());
        }
    } // namespace ScaleAnimator
} // namespace app::classes::types
