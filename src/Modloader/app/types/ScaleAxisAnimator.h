#pragma once
#include <Modloader/app/structs/ScaleAxisAnimator.h>
#include <Modloader/app/structs/ScaleAxisAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaleAxisAnimator {
        inline app::ScaleAxisAnimator__Class** type_info() {
            static app::ScaleAxisAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaleAxisAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaleAxisAnimator__Class* get_class() {
            return il2cpp::get_class<app::ScaleAxisAnimator__Class>(type_info(), "", "ScaleAxisAnimator");
        }
        inline app::ScaleAxisAnimator* create() {
            return il2cpp::create_object<app::ScaleAxisAnimator>(get_class());
        }
    } // namespace ScaleAxisAnimator
} // namespace app::classes::types
