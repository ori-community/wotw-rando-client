#pragma once
#include <Modloader/app/structs/XmlNamespaceManager_NamespaceDeclaration__Array.h>
#include <Modloader/app/structs/XmlNamespaceManager_NamespaceDeclaration__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNamespaceManager_NamespaceDeclaration__Array {
        inline app::XmlNamespaceManager_NamespaceDeclaration__Array__Class** type_info() {
            static app::XmlNamespaceManager_NamespaceDeclaration__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlNamespaceManager_NamespaceDeclaration__Array__Class**)(modloader::win::memory::resolve_rva(0x04783E98));
            }
            return cache;
        }
        inline app::XmlNamespaceManager_NamespaceDeclaration__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlNamespaceManager_NamespaceDeclaration__Array__Class>(type_info(), "System.Xml", "XmlNamespaceManager+NamespaceDeclaration[]");
        }
        inline app::XmlNamespaceManager_NamespaceDeclaration__Array* create() {
            return il2cpp::create_object<app::XmlNamespaceManager_NamespaceDeclaration__Array>(get_class());
        }
    } // namespace XmlNamespaceManager_NamespaceDeclaration__Array
} // namespace app::classes::types
