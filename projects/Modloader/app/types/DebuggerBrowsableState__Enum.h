#pragma once
#include <Modloader/app/structs/DebuggerBrowsableState__Enum.h>
#include <Modloader/app/structs/DebuggerBrowsableState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebuggerBrowsableState__Enum {
        inline app::DebuggerBrowsableState__Enum__Class** type_info() {
            static app::DebuggerBrowsableState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebuggerBrowsableState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebuggerBrowsableState__Enum__Class* get_class() {
            return il2cpp::get_class<app::DebuggerBrowsableState__Enum__Class>(type_info(), "System.Diagnostics", "DebuggerBrowsableState");
        }
        inline app::DebuggerBrowsableState__Enum* create() {
            return il2cpp::create_object<app::DebuggerBrowsableState__Enum>(get_class());
        }
    } // namespace DebuggerBrowsableState__Enum
} // namespace app::classes::types
