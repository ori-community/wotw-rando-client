#pragma once
#include <Modloader/app/structs/MoveEventWindowAnimator__Array.h>
#include <Modloader/app/structs/MoveEventWindowAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoveEventWindowAnimator__Array {
        inline app::MoveEventWindowAnimator__Array__Class** type_info() {
            static app::MoveEventWindowAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoveEventWindowAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoveEventWindowAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::MoveEventWindowAnimator__Array__Class>(type_info(), "Moon.Timeline", "MoveEventWindowAnimator[]");
        }
        inline app::MoveEventWindowAnimator__Array* create() {
            return il2cpp::create_object<app::MoveEventWindowAnimator__Array>(get_class());
        }
    } // namespace MoveEventWindowAnimator__Array
} // namespace app::classes::types
