#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScrollRect_ScrollbarVisibility__Enum {
        namespace {
            inline app::ScrollRect_ScrollbarVisibility__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ScrollRect_ScrollbarVisibility__Enum__Class** type_info = &type_info_ref;
        inline app::ScrollRect_ScrollbarVisibility__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ScrollRect_ScrollbarVisibility__Enum__Class>(type_info, "UnityEngine.UI", "ScrollRect", "ScrollbarVisibility");
        }
        inline app::ScrollRect_ScrollbarVisibility__Enum* create() {
            return il2cpp::create_object<app::ScrollRect_ScrollbarVisibility__Enum>(get_class());
        }
    } // namespace ScrollRect_ScrollbarVisibility__Enum
} // namespace app::classes::types
