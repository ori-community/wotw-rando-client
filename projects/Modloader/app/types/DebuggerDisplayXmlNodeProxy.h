#pragma once
#include <Modloader/app/structs/DebuggerDisplayXmlNodeProxy.h>
#include <Modloader/app/structs/DebuggerDisplayXmlNodeProxy__Boxed.h>
#include <Modloader/app/structs/DebuggerDisplayXmlNodeProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DebuggerDisplayXmlNodeProxy {
        inline app::DebuggerDisplayXmlNodeProxy__Class** type_info() {
            static app::DebuggerDisplayXmlNodeProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DebuggerDisplayXmlNodeProxy__Class**)(modloader::win::memory::resolve_rva(0x04780D98));
            }
            return cache;
        }
        inline app::DebuggerDisplayXmlNodeProxy__Class* get_class() {
            return il2cpp::get_class<app::DebuggerDisplayXmlNodeProxy__Class>(type_info(), "System.Xml", "DebuggerDisplayXmlNodeProxy");
        }
        inline app::DebuggerDisplayXmlNodeProxy* create() {
            return il2cpp::create_object<app::DebuggerDisplayXmlNodeProxy>(get_class());
        }
        inline app::DebuggerDisplayXmlNodeProxy__Boxed* box(app::DebuggerDisplayXmlNodeProxy value) {
            return il2cpp::box_value<app::DebuggerDisplayXmlNodeProxy__Boxed>(get_class(), value);
        }
    } // namespace DebuggerDisplayXmlNodeProxy
} // namespace app::classes::types
