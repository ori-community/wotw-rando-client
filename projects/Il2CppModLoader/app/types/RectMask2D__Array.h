#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RectMask2D__Array {
        namespace {
            app::RectMask2D__Array__Class* type_info_ref = nullptr;
        }
        app::RectMask2D__Array__Class** type_info = &type_info_ref;
        inline app::RectMask2D__Array__Class* get_class() {
            return il2cpp::get_class<app::RectMask2D__Array__Class>(type_info, "UnityEngine.UI", "RectMask2D[]");
        }
        inline app::RectMask2D__Array* create() {
            return il2cpp::create_object<app::RectMask2D__Array>(get_class());
        }
    } // namespace RectMask2D__Array
} // namespace app::classes::types
