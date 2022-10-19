#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_NodeData {
        inline app::XmlTextReaderImpl_NodeData__Class** type_info = (app::XmlTextReaderImpl_NodeData__Class**)(modloader::win::memory::resolve_rva(0x04724230));
        inline app::XmlTextReaderImpl_NodeData__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_NodeData__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "NodeData");
        }
        inline app::XmlTextReaderImpl_NodeData* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_NodeData>(get_class());
        }
        inline app::XmlTextReaderImpl_NodeData__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlTextReaderImpl_NodeData__Array>(get_class(), size);
        }
        inline app::XmlTextReaderImpl_NodeData__Array* create_array(const std::vector<app::XmlTextReaderImpl_NodeData*>& items) {
            return il2cpp::array_new<app::XmlTextReaderImpl_NodeData__Array>(get_class(), items);
        }
    } // namespace XmlTextReaderImpl_NodeData
} // namespace app::classes::types
