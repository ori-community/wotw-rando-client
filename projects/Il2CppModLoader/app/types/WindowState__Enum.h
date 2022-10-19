#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WindowState__Enum {
        namespace {
            inline app::WindowState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WindowState__Enum__Class** type_info = &type_info_ref;
        inline app::WindowState__Enum__Class* get_class() {
            return il2cpp::get_class<app::WindowState__Enum__Class>(type_info, "", "WindowState");
        }
        inline app::WindowState__Enum* create() {
            return il2cpp::create_object<app::WindowState__Enum>(get_class());
        }
    } // namespace WindowState__Enum
} // namespace app::classes::types
