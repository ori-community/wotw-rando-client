#pragma once
#include <Modloader/app/structs/DebuggerTypeProxyAttribute.h>
#include <Modloader/app/structs/DebuggerTypeProxyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebuggerTypeProxyAttribute {
        inline app::DebuggerTypeProxyAttribute__Class** type_info() {
            static app::DebuggerTypeProxyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebuggerTypeProxyAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebuggerTypeProxyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerTypeProxyAttribute__Class>(type_info(), "System.Diagnostics", "DebuggerTypeProxyAttribute");
        }
        inline app::DebuggerTypeProxyAttribute* create() {
            return il2cpp::create_object<app::DebuggerTypeProxyAttribute>(get_class());
        }
    } // namespace DebuggerTypeProxyAttribute
} // namespace app::classes::types
