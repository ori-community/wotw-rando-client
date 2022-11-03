#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebuggerBrowsableAttribute {
        namespace {
            inline app::DebuggerBrowsableAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DebuggerBrowsableAttribute__Class** type_info = &type_info_ref;
        inline app::DebuggerBrowsableAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerBrowsableAttribute__Class>(type_info, "System.Diagnostics", "DebuggerBrowsableAttribute");
        }
        inline app::DebuggerBrowsableAttribute* create() {
            return il2cpp::create_object<app::DebuggerBrowsableAttribute>(get_class());
        }
    } // namespace DebuggerBrowsableAttribute
} // namespace app::classes::types
