#pragma once
#include <Modloader/app/structs/ConsoleModifiers__Enum.h>
#include <Modloader/app/structs/ConsoleModifiers__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsoleModifiers__Enum {
        inline app::ConsoleModifiers__Enum__Class** type_info() {
            static app::ConsoleModifiers__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConsoleModifiers__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConsoleModifiers__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConsoleModifiers__Enum__Class>(type_info(), "System", "ConsoleModifiers");
        }
        inline app::ConsoleModifiers__Enum* create() {
            return il2cpp::create_object<app::ConsoleModifiers__Enum>(get_class());
        }
    } // namespace ConsoleModifiers__Enum
} // namespace app::classes::types
