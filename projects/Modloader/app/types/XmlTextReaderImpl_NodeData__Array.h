#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_NodeData__Array {
        inline app::XmlTextReaderImpl_NodeData__Array__Class** type_info = (app::XmlTextReaderImpl_NodeData__Array__Class**)(modloader::win::memory::resolve_rva(0x0472A4F0));
        inline app::XmlTextReaderImpl_NodeData__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTextReaderImpl_NodeData__Array__Class>(type_info, "System.Xml", "XmlTextReaderImpl+NodeData[]");
        }
        inline app::XmlTextReaderImpl_NodeData__Array* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_NodeData__Array>(get_class());
        }
    } // namespace XmlTextReaderImpl_NodeData__Array
} // namespace app::classes::types
