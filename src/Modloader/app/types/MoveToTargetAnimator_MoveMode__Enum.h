#pragma once
#include <Modloader/app/structs/MoveToTargetAnimator_MoveMode__Enum.h>
#include <Modloader/app/structs/MoveToTargetAnimator_MoveMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveToTargetAnimator_MoveMode__Enum {
        inline app::MoveToTargetAnimator_MoveMode__Enum__Class** type_info() {
            static app::MoveToTargetAnimator_MoveMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveToTargetAnimator_MoveMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveToTargetAnimator_MoveMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoveToTargetAnimator_MoveMode__Enum__Class>(type_info(), "", "MoveToTargetAnimator", "MoveMode");
        }
        inline app::MoveToTargetAnimator_MoveMode__Enum* create() {
            return il2cpp::create_object<app::MoveToTargetAnimator_MoveMode__Enum>(get_class());
        }
    } // namespace MoveToTargetAnimator_MoveMode__Enum
} // namespace app::classes::types
