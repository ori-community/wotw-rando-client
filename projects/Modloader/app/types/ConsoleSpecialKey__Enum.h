#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConsoleSpecialKey__Enum {
        namespace {
            inline app::ConsoleSpecialKey__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ConsoleSpecialKey__Enum__Class** type_info = &type_info_ref;
        inline app::ConsoleSpecialKey__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConsoleSpecialKey__Enum__Class>(type_info, "System", "ConsoleSpecialKey");
        }
        inline app::ConsoleSpecialKey__Enum* create() {
            return il2cpp::create_object<app::ConsoleSpecialKey__Enum>(get_class());
        }
    } // namespace ConsoleSpecialKey__Enum
} // namespace app::classes::types
