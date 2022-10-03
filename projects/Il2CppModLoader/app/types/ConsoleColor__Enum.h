#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConsoleColor__Enum {
        namespace {
            app::ConsoleColor__Enum__Class* type_info_ref = nullptr;
        }
        app::ConsoleColor__Enum__Class** type_info = &type_info_ref;
        inline app::ConsoleColor__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConsoleColor__Enum__Class>(type_info, "System", "ConsoleColor");
        }
        inline app::ConsoleColor__Enum* create() {
            return il2cpp::create_object<app::ConsoleColor__Enum>(get_class());
        }
    } // namespace ConsoleColor__Enum
} // namespace app::classes::types
