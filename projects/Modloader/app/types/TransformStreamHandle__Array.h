#pragma once
#include <Modloader/app/structs/TransformStreamHandle__Array.h>
#include <Modloader/app/structs/TransformStreamHandle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TransformStreamHandle__Array {
        inline app::TransformStreamHandle__Array__Class** type_info() {
            static app::TransformStreamHandle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TransformStreamHandle__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TransformStreamHandle__Array__Class* get_class() {
            return il2cpp::get_class<app::TransformStreamHandle__Array__Class>(type_info(), "UnityEngine.Experimental.Animations", "TransformStreamHandle[]");
        }
        inline app::TransformStreamHandle__Array* create() {
            return il2cpp::create_object<app::TransformStreamHandle__Array>(get_class());
        }
    } // namespace TransformStreamHandle__Array
} // namespace app::classes::types
