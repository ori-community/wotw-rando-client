#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RectTransform_Edge__Enum {
        namespace {
            app::RectTransform_Edge__Enum__Class* type_info_ref = nullptr;
        }
        app::RectTransform_Edge__Enum__Class** type_info = &type_info_ref;
        inline app::RectTransform_Edge__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RectTransform_Edge__Enum__Class>(type_info, "UnityEngine", "RectTransform", "Edge");
        }
        inline app::RectTransform_Edge__Enum* create() {
            return il2cpp::create_object<app::RectTransform_Edge__Enum>(get_class());
        }
    } // namespace RectTransform_Edge__Enum
} // namespace app::classes::types
