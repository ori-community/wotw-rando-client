#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoveEventWindowAnimator {
        namespace {
            app::MoveEventWindowAnimator__Class* type_info_ref = nullptr;
        }
        app::MoveEventWindowAnimator__Class** type_info = &type_info_ref;
        inline app::MoveEventWindowAnimator__Class* get_class() {
            return il2cpp::get_class<app::MoveEventWindowAnimator__Class>(type_info, "Moon.Timeline", "MoveEventWindowAnimator");
        }
        inline app::MoveEventWindowAnimator* create() {
            return il2cpp::create_object<app::MoveEventWindowAnimator>(get_class());
        }
        inline app::MoveEventWindowAnimator__Array* create_array(int size) {
            return il2cpp::array_new<app::MoveEventWindowAnimator__Array>(get_class(), size);
        }
    } // namespace MoveEventWindowAnimator
} // namespace app::classes::types
