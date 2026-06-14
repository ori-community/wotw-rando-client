#pragma once
#include <Modloader/app/structs/ConsoleConnection_State__Enum.h>
#include <Modloader/app/structs/ConsoleConnection_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConsoleConnection_State__Enum {
        inline app::ConsoleConnection_State__Enum__Class** type_info() {
            static app::ConsoleConnection_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConsoleConnection_State__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConsoleConnection_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::ConsoleConnection_State__Enum__Class>(type_info(), "", "ConsoleConnection", "State");
        }
        inline app::ConsoleConnection_State__Enum* create() {
            return il2cpp::create_object<app::ConsoleConnection_State__Enum>(get_class());
        }
    } // namespace ConsoleConnection_State__Enum
} // namespace app::classes::types
