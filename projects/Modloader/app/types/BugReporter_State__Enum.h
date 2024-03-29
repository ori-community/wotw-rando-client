#pragma once
#include <Modloader/app/structs/BugReporter_State__Enum.h>
#include <Modloader/app/structs/BugReporter_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BugReporter_State__Enum {
        inline app::BugReporter_State__Enum__Class** type_info() {
            static app::BugReporter_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BugReporter_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0474D768));
            }
            return cache;
        }
        inline app::BugReporter_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BugReporter_State__Enum__Class>(type_info(), "", "BugReporter", "State");
        }
        inline app::BugReporter_State__Enum* create() {
            return il2cpp::create_object<app::BugReporter_State__Enum>(get_class());
        }
    } // namespace BugReporter_State__Enum
} // namespace app::classes::types
