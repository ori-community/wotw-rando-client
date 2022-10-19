#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DebuggerTypeProxyAttribute {
        namespace {
            inline app::DebuggerTypeProxyAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DebuggerTypeProxyAttribute__Class** type_info = &type_info_ref;
        inline app::DebuggerTypeProxyAttribute__Class* get_class() {
            return il2cpp::get_class<app::DebuggerTypeProxyAttribute__Class>(type_info, "System.Diagnostics", "DebuggerTypeProxyAttribute");
        }
        inline app::DebuggerTypeProxyAttribute* create() {
            return il2cpp::create_object<app::DebuggerTypeProxyAttribute>(get_class());
        }
    } // namespace DebuggerTypeProxyAttribute
} // namespace app::classes::types
