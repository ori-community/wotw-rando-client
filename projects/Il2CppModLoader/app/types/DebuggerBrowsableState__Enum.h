#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebuggerBrowsableState__Enum {
        namespace {
            inline app::DebuggerBrowsableState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::DebuggerBrowsableState__Enum__Class** type_info = &type_info_ref;
        inline app::DebuggerBrowsableState__Enum__Class* get_class() {
            return il2cpp::get_class<app::DebuggerBrowsableState__Enum__Class>(type_info, "System.Diagnostics", "DebuggerBrowsableState");
        }
        inline app::DebuggerBrowsableState__Enum* create() {
            return il2cpp::create_object<app::DebuggerBrowsableState__Enum>(get_class());
        }
    } // namespace DebuggerBrowsableState__Enum
} // namespace app::classes::types
