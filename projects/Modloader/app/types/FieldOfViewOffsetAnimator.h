#pragma once
#include <Modloader/app/structs/FieldOfViewOffsetAnimator.h>
#include <Modloader/app/structs/FieldOfViewOffsetAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FieldOfViewOffsetAnimator {
        inline app::FieldOfViewOffsetAnimator__Class** type_info() {
            static app::FieldOfViewOffsetAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FieldOfViewOffsetAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FieldOfViewOffsetAnimator__Class* get_class() {
            return il2cpp::get_class<app::FieldOfViewOffsetAnimator__Class>(type_info(), "", "FieldOfViewOffsetAnimator");
        }
        inline app::FieldOfViewOffsetAnimator* create() {
            return il2cpp::create_object<app::FieldOfViewOffsetAnimator>(get_class());
        }
    } // namespace FieldOfViewOffsetAnimator
} // namespace app::classes::types
