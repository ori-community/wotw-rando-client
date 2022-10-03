#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Navigation_Mode__Enum {
        namespace {
            app::Navigation_Mode__Enum__Class* type_info_ref = nullptr;
        }
        app::Navigation_Mode__Enum__Class** type_info = &type_info_ref;
        inline app::Navigation_Mode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Navigation_Mode__Enum__Class>(type_info, "UnityEngine.UI", "Navigation", "Mode");
        }
        inline app::Navigation_Mode__Enum* create() {
            return il2cpp::create_object<app::Navigation_Mode__Enum>(get_class());
        }
    } // namespace Navigation_Mode__Enum
} // namespace app::classes::types
