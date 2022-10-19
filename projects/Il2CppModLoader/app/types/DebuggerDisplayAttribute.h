#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebuggerDisplayAttribute {
        namespace {
            inline app::DebuggerDisplayAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DebuggerDisplayAttribute__Class** type_info = &type_info_ref;
        inline app::DebuggerDisplayAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerDisplayAttribute__Class>(type_info, "System.Diagnostics", "DebuggerDisplayAttribute");
        }
        inline app::DebuggerDisplayAttribute* create() {
            return il2cpp::create_object<app::DebuggerDisplayAttribute>(get_class());
        }
    } // namespace DebuggerDisplayAttribute
} // namespace app::classes::types
