#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebuggerHiddenAttribute {
        namespace {
            app::DebuggerHiddenAttribute__Class* type_info_ref = nullptr;
        }
        app::DebuggerHiddenAttribute__Class** type_info = &type_info_ref;
        inline app::DebuggerHiddenAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerHiddenAttribute__Class>(type_info, "System.Diagnostics", "DebuggerHiddenAttribute");
        }
        inline app::DebuggerHiddenAttribute* create() {
            return il2cpp::create_object<app::DebuggerHiddenAttribute>(get_class());
        }
    } // namespace DebuggerHiddenAttribute
} // namespace app::classes::types
