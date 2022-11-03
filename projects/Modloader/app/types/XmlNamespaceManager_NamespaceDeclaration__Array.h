#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNamespaceManager_NamespaceDeclaration__Array {
        inline app::XmlNamespaceManager_NamespaceDeclaration__Array__Class** type_info = (app::XmlNamespaceManager_NamespaceDeclaration__Array__Class**)(modloader::win::memory::resolve_rva(0x04783E98));
        inline app::XmlNamespaceManager_NamespaceDeclaration__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlNamespaceManager_NamespaceDeclaration__Array__Class>(type_info, "System.Xml", "XmlNamespaceManager+NamespaceDeclaration[]");
        }
        inline app::XmlNamespaceManager_NamespaceDeclaration__Array* create() {
            return il2cpp::create_object<app::XmlNamespaceManager_NamespaceDeclaration__Array>(get_class());
        }
    } // namespace XmlNamespaceManager_NamespaceDeclaration__Array
} // namespace app::classes::types
