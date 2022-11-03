#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_NoNamespaceManager {
        inline app::XmlTextReaderImpl_NoNamespaceManager__Class** type_info = (app::XmlTextReaderImpl_NoNamespaceManager__Class**)(modloader::win::memory::resolve_rva(0x04790E68));
        inline app::XmlTextReaderImpl_NoNamespaceManager__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_NoNamespaceManager__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "NoNamespaceManager");
        }
        inline app::XmlTextReaderImpl_NoNamespaceManager* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_NoNamespaceManager>(get_class());
        }
    } // namespace XmlTextReaderImpl_NoNamespaceManager
} // namespace app::classes::types
