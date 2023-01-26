#pragma once
#include <Modloader/app/structs/ReadyToFinishAnimator__Array.h>
#include <Modloader/app/structs/ReadyToFinishAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ReadyToFinishAnimator__Array {
        inline app::ReadyToFinishAnimator__Array__Class** type_info() {
            static app::ReadyToFinishAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ReadyToFinishAnimator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ReadyToFinishAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::ReadyToFinishAnimator__Array__Class>(type_info(), "Moon.Timeline", "ReadyToFinishAnimator[]");
        }
        inline app::ReadyToFinishAnimator__Array* create() {
            return il2cpp::create_object<app::ReadyToFinishAnimator__Array>(get_class());
        }
    } // namespace ReadyToFinishAnimator__Array
} // namespace app::classes::types
