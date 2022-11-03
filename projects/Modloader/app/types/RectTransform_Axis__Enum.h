#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RectTransform_Axis__Enum {
        namespace {
            inline app::RectTransform_Axis__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RectTransform_Axis__Enum__Class** type_info = &type_info_ref;
        inline app::RectTransform_Axis__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RectTransform_Axis__Enum__Class>(type_info, "UnityEngine", "RectTransform", "Axis");
        }
        inline app::RectTransform_Axis__Enum* create() {
            return il2cpp::create_object<app::RectTransform_Axis__Enum>(get_class());
        }
    } // namespace RectTransform_Axis__Enum
} // namespace app::classes::types
