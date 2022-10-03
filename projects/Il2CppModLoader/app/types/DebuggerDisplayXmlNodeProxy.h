#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebuggerDisplayXmlNodeProxy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebuggerDisplayXmlNodeProxy__Class** type_info;
        inline app::DebuggerDisplayXmlNodeProxy__Class* get_class() {
            return il2cpp::get_class<app::DebuggerDisplayXmlNodeProxy__Class>(type_info, "System.Xml", "DebuggerDisplayXmlNodeProxy");
        }
        inline app::DebuggerDisplayXmlNodeProxy* create() {
            return il2cpp::create_object<app::DebuggerDisplayXmlNodeProxy>(get_class());
        }
        inline app::DebuggerDisplayXmlNodeProxy__Boxed* box(app::DebuggerDisplayXmlNodeProxy value) {
            return il2cpp::box_value<app::DebuggerDisplayXmlNodeProxy__Boxed>(get_class(), value);
        }
    } // namespace DebuggerDisplayXmlNodeProxy
} // namespace app::classes::types
