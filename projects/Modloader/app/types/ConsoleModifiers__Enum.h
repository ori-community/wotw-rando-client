#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConsoleModifiers__Enum__Class.h>
#include <Modloader/app/structs/ConsoleModifiers__Enum.h>

namespace app::classes::types {
    namespace ConsoleModifiers__Enum {
        namespace {
            inline app::ConsoleModifiers__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ConsoleModifiers__Enum__Class** type_info = &type_info_ref;
        inline app::ConsoleModifiers__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConsoleModifiers__Enum__Class>(type_info, "System", "ConsoleModifiers");
        }
        inline app::ConsoleModifiers__Enum* create() {
            return il2cpp::create_object<app::ConsoleModifiers__Enum>(get_class());
        }
    } // namespace ConsoleModifiers__Enum
} // namespace app::classes::types
