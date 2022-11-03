#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_XmlContext {
        inline app::XmlTextReaderImpl_XmlContext__Class** type_info = (app::XmlTextReaderImpl_XmlContext__Class**)(modloader::win::memory::resolve_rva(0x04768A60));
        inline app::XmlTextReaderImpl_XmlContext__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_XmlContext__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "XmlContext");
        }
        inline app::XmlTextReaderImpl_XmlContext* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_XmlContext>(get_class());
        }
    } // namespace XmlTextReaderImpl_XmlContext
} // namespace app::classes::types
