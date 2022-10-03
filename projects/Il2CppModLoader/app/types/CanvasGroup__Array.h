#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CanvasGroup__Array {
        namespace {
            app::CanvasGroup__Array__Class* type_info_ref = nullptr;
        }
        app::CanvasGroup__Array__Class** type_info = &type_info_ref;
        inline app::CanvasGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::CanvasGroup__Array__Class>(type_info, "UnityEngine", "CanvasGroup[]");
        }
        inline app::CanvasGroup__Array* create() {
            return il2cpp::create_object<app::CanvasGroup__Array>(get_class());
        }
    } // namespace CanvasGroup__Array
} // namespace app::classes::types
