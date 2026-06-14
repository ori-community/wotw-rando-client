#pragma once
#include <Modloader/app/structs/ConsoleSpecialKey__Enum.h>
#include <Modloader/app/structs/ConsoleSpecialKey__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsoleSpecialKey__Enum {
        inline app::ConsoleSpecialKey__Enum__Class** type_info() {
            static app::ConsoleSpecialKey__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConsoleSpecialKey__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConsoleSpecialKey__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConsoleSpecialKey__Enum__Class>(type_info(), "System", "ConsoleSpecialKey");
        }
        inline app::ConsoleSpecialKey__Enum* create() {
            return il2cpp::create_object<app::ConsoleSpecialKey__Enum>(get_class());
        }
    } // namespace ConsoleSpecialKey__Enum
} // namespace app::classes::types
