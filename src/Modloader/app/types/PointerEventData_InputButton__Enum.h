#pragma once
#include <Modloader/app/structs/PointerEventData_InputButton__Enum.h>
#include <Modloader/app/structs/PointerEventData_InputButton__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PointerEventData_InputButton__Enum {
        inline app::PointerEventData_InputButton__Enum__Class** type_info() {
            static app::PointerEventData_InputButton__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PointerEventData_InputButton__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PointerEventData_InputButton__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerEventData_InputButton__Enum__Class>(type_info(), "UnityEngine.EventSystems", "PointerEventData", "InputButton");
        }
        inline app::PointerEventData_InputButton__Enum* create() {
            return il2cpp::create_object<app::PointerEventData_InputButton__Enum>(get_class());
        }
    } // namespace PointerEventData_InputButton__Enum
} // namespace app::classes::types
