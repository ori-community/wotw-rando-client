#pragma once
#include <Modloader/app/structs/CanvasGroup__Array.h>
#include <Modloader/app/structs/CanvasGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanvasGroup__Array {
        inline app::CanvasGroup__Array__Class** type_info() {
            static app::CanvasGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanvasGroup__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanvasGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::CanvasGroup__Array__Class>(type_info(), "UnityEngine", "CanvasGroup[]");
        }
        inline app::CanvasGroup__Array* create() {
            return il2cpp::create_object<app::CanvasGroup__Array>(get_class());
        }
    } // namespace CanvasGroup__Array
} // namespace app::classes::types
