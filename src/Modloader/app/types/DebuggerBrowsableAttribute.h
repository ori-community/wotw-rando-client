#pragma once
#include <Modloader/app/structs/DebuggerBrowsableAttribute.h>
#include <Modloader/app/structs/DebuggerBrowsableAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebuggerBrowsableAttribute {
        inline app::DebuggerBrowsableAttribute__Class** type_info() {
            static app::DebuggerBrowsableAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebuggerBrowsableAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebuggerBrowsableAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerBrowsableAttribute__Class>(type_info(), "System.Diagnostics", "DebuggerBrowsableAttribute");
        }
        inline app::DebuggerBrowsableAttribute* create() {
            return il2cpp::create_object<app::DebuggerBrowsableAttribute>(get_class());
        }
    } // namespace DebuggerBrowsableAttribute
} // namespace app::classes::types
