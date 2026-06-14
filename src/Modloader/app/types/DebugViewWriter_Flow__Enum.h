#pragma once
#include <Modloader/app/structs/DebugViewWriter_Flow__Enum.h>
#include <Modloader/app/structs/DebugViewWriter_Flow__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebugViewWriter_Flow__Enum {
        inline app::DebugViewWriter_Flow__Enum__Class** type_info() {
            static app::DebugViewWriter_Flow__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebugViewWriter_Flow__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebugViewWriter_Flow__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DebugViewWriter_Flow__Enum__Class>(type_info(), "System.Linq.Expressions", "DebugViewWriter", "Flow");
        }
        inline app::DebugViewWriter_Flow__Enum* create() {
            return il2cpp::create_object<app::DebugViewWriter_Flow__Enum>(get_class());
        }
    } // namespace DebugViewWriter_Flow__Enum
} // namespace app::classes::types
