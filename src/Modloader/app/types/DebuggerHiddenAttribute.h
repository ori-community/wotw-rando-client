#pragma once
#include <Modloader/app/structs/DebuggerHiddenAttribute.h>
#include <Modloader/app/structs/DebuggerHiddenAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebuggerHiddenAttribute {
        inline app::DebuggerHiddenAttribute__Class** type_info() {
            static app::DebuggerHiddenAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DebuggerHiddenAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DebuggerHiddenAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerHiddenAttribute__Class>(type_info(), "System.Diagnostics", "DebuggerHiddenAttribute");
        }
        inline app::DebuggerHiddenAttribute* create() {
            return il2cpp::create_object<app::DebuggerHiddenAttribute>(get_class());
        }
    } // namespace DebuggerHiddenAttribute
} // namespace app::classes::types
