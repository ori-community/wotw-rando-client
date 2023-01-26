#pragma once
#include <Modloader/app/structs/ActiveAnimationHandle__Array.h>
#include <Modloader/app/structs/ActiveAnimationHandle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActiveAnimationHandle__Array {
        inline app::ActiveAnimationHandle__Array__Class** type_info() {
            static app::ActiveAnimationHandle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActiveAnimationHandle__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActiveAnimationHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::ActiveAnimationHandle__Array__Class>(type_info(), "Moon", "ActiveAnimationHandle[]");
        }
        inline app::ActiveAnimationHandle__Array* create() {
            return il2cpp::create_object<app::ActiveAnimationHandle__Array>(get_class());
        }
    } // namespace ActiveAnimationHandle__Array
} // namespace app::classes::types
