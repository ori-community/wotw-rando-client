#pragma once
#include <Modloader/app/structs/RectTransform_Axis__Enum.h>
#include <Modloader/app/structs/RectTransform_Axis__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RectTransform_Axis__Enum {
        inline app::RectTransform_Axis__Enum__Class** type_info() {
            static app::RectTransform_Axis__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RectTransform_Axis__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RectTransform_Axis__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RectTransform_Axis__Enum__Class>(type_info(), "UnityEngine", "RectTransform", "Axis");
        }
        inline app::RectTransform_Axis__Enum* create() {
            return il2cpp::create_object<app::RectTransform_Axis__Enum>(get_class());
        }
    } // namespace RectTransform_Axis__Enum
} // namespace app::classes::types
