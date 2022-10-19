#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SortFlags__Enum {
        namespace {
            inline app::SortFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SortFlags__Enum__Class** type_info = &type_info_ref;
        inline app::SortFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::SortFlags__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "SortFlags");
        }
        inline app::SortFlags__Enum* create() {
            return il2cpp::create_object<app::SortFlags__Enum>(get_class());
        }
    } // namespace SortFlags__Enum
} // namespace app::classes::types
