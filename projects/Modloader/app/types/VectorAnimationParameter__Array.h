#pragma once
#include <Modloader/app/structs/VectorAnimationParameter__Array.h>
#include <Modloader/app/structs/VectorAnimationParameter__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VectorAnimationParameter__Array {
        inline app::VectorAnimationParameter__Array__Class** type_info() {
            static app::VectorAnimationParameter__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VectorAnimationParameter__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VectorAnimationParameter__Array__Class* get_class() {
            return il2cpp::get_class<app::VectorAnimationParameter__Array__Class>(type_info(), "Moon", "VectorAnimationParameter[]");
        }
        inline app::VectorAnimationParameter__Array* create() {
            return il2cpp::create_object<app::VectorAnimationParameter__Array>(get_class());
        }
    } // namespace VectorAnimationParameter__Array
} // namespace app::classes::types
