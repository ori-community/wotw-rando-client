#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_NodeData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTextReaderImpl_NodeData__Array__Class** type_info;
        inline app::XmlTextReaderImpl_NodeData__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTextReaderImpl_NodeData__Array__Class>(type_info, "System.Xml", "XmlTextReaderImpl+NodeData[]");
        }
        inline app::XmlTextReaderImpl_NodeData__Array* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_NodeData__Array>(get_class());
        }
    } // namespace XmlTextReaderImpl_NodeData__Array
} // namespace app::classes::types
