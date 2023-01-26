#pragma once
#include <Modloader/app/structs/WindowState__Enum.h>
#include <Modloader/app/structs/WindowState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindowState__Enum {
        inline app::WindowState__Enum__Class** type_info() {
            static app::WindowState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WindowState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WindowState__Enum__Class* get_class() {
            return il2cpp::get_class<app::WindowState__Enum__Class>(type_info(), "", "WindowState");
        }
        inline app::WindowState__Enum* create() {
            return il2cpp::create_object<app::WindowState__Enum>(get_class());
        }
    } // namespace WindowState__Enum
} // namespace app::classes::types
