#pragma once
#include <Modloader/app/structs/RectTransform__Array.h>
#include <Modloader/app/structs/RectTransform__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RectTransform__Array {
        inline app::RectTransform__Array__Class** type_info() {
            static app::RectTransform__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RectTransform__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RectTransform__Array__Class* get_class() {
            return il2cpp::get_class<app::RectTransform__Array__Class>(type_info(), "UnityEngine", "RectTransform[]");
        }
        inline app::RectTransform__Array* create() {
            return il2cpp::create_object<app::RectTransform__Array>(get_class());
        }
    } // namespace RectTransform__Array
} // namespace app::classes::types
