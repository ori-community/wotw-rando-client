#pragma once
#include <Modloader/app/structs/ConsoleKey__Enum.h>
#include <Modloader/app/structs/ConsoleKey__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsoleKey__Enum {
        inline app::ConsoleKey__Enum__Class** type_info() {
            static app::ConsoleKey__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConsoleKey__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConsoleKey__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConsoleKey__Enum__Class>(type_info(), "System", "ConsoleKey");
        }
        inline app::ConsoleKey__Enum* create() {
            return il2cpp::create_object<app::ConsoleKey__Enum>(get_class());
        }
    } // namespace ConsoleKey__Enum
} // namespace app::classes::types
