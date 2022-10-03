#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_NodeData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTextReaderImpl_NodeData__Class** type_info;
        inline app::XmlTextReaderImpl_NodeData__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_NodeData__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "NodeData");
        }
        inline app::XmlTextReaderImpl_NodeData* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_NodeData>(get_class());
        }
        inline app::XmlTextReaderImpl_NodeData__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlTextReaderImpl_NodeData__Array>(get_class(), size);
        }
    } // namespace XmlTextReaderImpl_NodeData
} // namespace app::classes::types
