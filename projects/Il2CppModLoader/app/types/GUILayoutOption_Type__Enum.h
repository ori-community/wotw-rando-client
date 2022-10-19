#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GUILayoutOption_Type__Enum {
        namespace {
            inline app::GUILayoutOption_Type__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GUILayoutOption_Type__Enum__Class** type_info = &type_info_ref;
        inline app::GUILayoutOption_Type__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GUILayoutOption_Type__Enum__Class>(type_info, "UnityEngine", "GUILayoutOption", "Type");
        }
        inline app::GUILayoutOption_Type__Enum* create() {
            return il2cpp::create_object<app::GUILayoutOption_Type__Enum>(get_class());
        }
    } // namespace GUILayoutOption_Type__Enum
} // namespace app::classes::types
