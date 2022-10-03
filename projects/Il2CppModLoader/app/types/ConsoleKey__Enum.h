#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsoleKey__Enum {
        namespace {
            app::ConsoleKey__Enum__Class* type_info_ref = nullptr;
        }
        app::ConsoleKey__Enum__Class** type_info = &type_info_ref;
        inline app::ConsoleKey__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConsoleKey__Enum__Class>(type_info, "System", "ConsoleKey");
        }
        inline app::ConsoleKey__Enum* create() {
            return il2cpp::create_object<app::ConsoleKey__Enum>(get_class());
        }
    } // namespace ConsoleKey__Enum
} // namespace app::classes::types
