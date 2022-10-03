#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveToTargetAnimator_MoveMode__Enum {
        namespace {
            app::MoveToTargetAnimator_MoveMode__Enum__Class* type_info_ref = nullptr;
        }
        app::MoveToTargetAnimator_MoveMode__Enum__Class** type_info = &type_info_ref;
        inline app::MoveToTargetAnimator_MoveMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoveToTargetAnimator_MoveMode__Enum__Class>(type_info, "", "MoveToTargetAnimator", "MoveMode");
        }
        inline app::MoveToTargetAnimator_MoveMode__Enum* create() {
            return il2cpp::create_object<app::MoveToTargetAnimator_MoveMode__Enum>(get_class());
        }
    } // namespace MoveToTargetAnimator_MoveMode__Enum
} // namespace app::classes::types
