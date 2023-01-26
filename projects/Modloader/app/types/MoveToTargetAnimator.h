#pragma once
#include <Modloader/app/structs/MoveToTargetAnimator.h>
#include <Modloader/app/structs/MoveToTargetAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveToTargetAnimator {
        inline app::MoveToTargetAnimator__Class** type_info() {
            static app::MoveToTargetAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveToTargetAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveToTargetAnimator__Class* get_class() {
            return il2cpp::get_class<app::MoveToTargetAnimator__Class>(type_info(), "", "MoveToTargetAnimator");
        }
        inline app::MoveToTargetAnimator* create() {
            return il2cpp::create_object<app::MoveToTargetAnimator>(get_class());
        }
    } // namespace MoveToTargetAnimator
} // namespace app::classes::types
