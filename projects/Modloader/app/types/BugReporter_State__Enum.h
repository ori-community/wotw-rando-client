#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BugReporter_State__Enum {
        inline app::BugReporter_State__Enum__Class** type_info = (app::BugReporter_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474D768));
        inline app::BugReporter_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BugReporter_State__Enum__Class>(type_info, "", "BugReporter", "State");
        }
        inline app::BugReporter_State__Enum* create() {
            return il2cpp::create_object<app::BugReporter_State__Enum>(get_class());
        }
    } // namespace BugReporter_State__Enum
} // namespace app::classes::types
