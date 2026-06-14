#pragma once
#include <Modloader/app/structs/DebuggerDisplayAttribute.h>
#include <Modloader/app/structs/DebuggerDisplayAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebuggerDisplayAttribute {
        inline app::DebuggerDisplayAttribute__Class** type_info() {
            static app::DebuggerDisplayAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebuggerDisplayAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebuggerDisplayAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerDisplayAttribute__Class>(type_info(), "System.Diagnostics", "DebuggerDisplayAttribute");
        }
        inline app::DebuggerDisplayAttribute* create() {
            return il2cpp::create_object<app::DebuggerDisplayAttribute>(get_class());
        }
    } // namespace DebuggerDisplayAttribute
} // namespace app::classes::types
