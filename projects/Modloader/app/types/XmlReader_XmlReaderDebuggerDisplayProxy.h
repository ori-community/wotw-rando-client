#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlReader_XmlReaderDebuggerDisplayProxy__Class.h>
#include <Modloader/app/structs/XmlReader_XmlReaderDebuggerDisplayProxy.h>
#include <Modloader/app/structs/XmlReader_XmlReaderDebuggerDisplayProxy__Boxed.h>

namespace app::classes::types {
    namespace XmlReader_XmlReaderDebuggerDisplayProxy {
        inline app::XmlReader_XmlReaderDebuggerDisplayProxy__Class** type_info = (app::XmlReader_XmlReaderDebuggerDisplayProxy__Class**)(modloader::win::memory::resolve_rva(0x04767DD0));
        inline app::XmlReader_XmlReaderDebuggerDisplayProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlReader_XmlReaderDebuggerDisplayProxy__Class>(type_info, "System.Xml", "XmlReader", "XmlReaderDebuggerDisplayProxy");
        }
        inline app::XmlReader_XmlReaderDebuggerDisplayProxy* create() {
            return il2cpp::create_object<app::XmlReader_XmlReaderDebuggerDisplayProxy>(get_class());
        }
        inline app::XmlReader_XmlReaderDebuggerDisplayProxy__Boxed* box(app::XmlReader_XmlReaderDebuggerDisplayProxy value) {
            return il2cpp::box_value<app::XmlReader_XmlReaderDebuggerDisplayProxy__Boxed>(get_class(), value);
        }
    } // namespace XmlReader_XmlReaderDebuggerDisplayProxy
} // namespace app::classes::types
