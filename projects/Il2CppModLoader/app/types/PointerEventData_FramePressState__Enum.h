#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PointerEventData_FramePressState__Enum {
        namespace {
            app::PointerEventData_FramePressState__Enum__Class* type_info_ref = nullptr;
        }
        app::PointerEventData_FramePressState__Enum__Class** type_info = &type_info_ref;
        inline app::PointerEventData_FramePressState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerEventData_FramePressState__Enum__Class>(type_info, "UnityEngine.EventSystems", "PointerEventData", "FramePressState");
        }
        inline app::PointerEventData_FramePressState__Enum* create() {
            return il2cpp::create_object<app::PointerEventData_FramePressState__Enum>(get_class());
        }
    } // namespace PointerEventData_FramePressState__Enum
} // namespace app::classes::types
