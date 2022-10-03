#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveEventWindowAnimator__Array {
        namespace {
            app::MoveEventWindowAnimator__Array__Class* type_info_ref = nullptr;
        }
        app::MoveEventWindowAnimator__Array__Class** type_info = &type_info_ref;
        inline app::MoveEventWindowAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::MoveEventWindowAnimator__Array__Class>(type_info, "Moon.Timeline", "MoveEventWindowAnimator[]");
        }
        inline app::MoveEventWindowAnimator__Array* create() {
            return il2cpp::create_object<app::MoveEventWindowAnimator__Array>(get_class());
        }
    } // namespace MoveEventWindowAnimator__Array
} // namespace app::classes::types
