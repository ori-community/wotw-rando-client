#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_NoNamespaceManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTextReaderImpl_NoNamespaceManager__Class** type_info;
        inline app::XmlTextReaderImpl_NoNamespaceManager__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_NoNamespaceManager__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "NoNamespaceManager");
        }
        inline app::XmlTextReaderImpl_NoNamespaceManager* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_NoNamespaceManager>(get_class());
        }
    } // namespace XmlTextReaderImpl_NoNamespaceManager
} // namespace app::classes::types
