#pragma once
#include <Modloader/app/structs/FloatAnimationParameter__Array.h>
#include <Modloader/app/structs/FloatAnimationParameter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatAnimationParameter__Array {
        inline app::FloatAnimationParameter__Array__Class** type_info() {
            static app::FloatAnimationParameter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatAnimationParameter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatAnimationParameter__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatAnimationParameter__Array__Class>(type_info(), "Moon", "FloatAnimationParameter[]");
        }
        inline app::FloatAnimationParameter__Array* create() {
            return il2cpp::create_object<app::FloatAnimationParameter__Array>(get_class());
        }
    } // namespace FloatAnimationParameter__Array
} // namespace app::classes::types
