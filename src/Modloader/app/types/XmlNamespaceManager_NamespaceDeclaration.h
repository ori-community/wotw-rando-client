#pragma once
#include <Modloader/app/structs/XmlNamespaceManager_NamespaceDeclaration.h>
#include <Modloader/app/structs/XmlNamespaceManager_NamespaceDeclaration__Array.h>
#include <Modloader/app/structs/XmlNamespaceManager_NamespaceDeclaration__Boxed.h>
#include <Modloader/app/structs/XmlNamespaceManager_NamespaceDeclaration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlNamespaceManager_NamespaceDeclaration {
        inline app::XmlNamespaceManager_NamespaceDeclaration__Class** type_info() {
            static app::XmlNamespaceManager_NamespaceDeclaration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlNamespaceManager_NamespaceDeclaration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlNamespaceManager_NamespaceDeclaration__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlNamespaceManager_NamespaceDeclaration__Class>(type_info(), "System.Xml", "XmlNamespaceManager", "NamespaceDeclaration");
        }
        inline app::XmlNamespaceManager_NamespaceDeclaration* create() {
            return il2cpp::create_object<app::XmlNamespaceManager_NamespaceDeclaration>(get_class());
        }
        inline app::XmlNamespaceManager_NamespaceDeclaration__Boxed* box(app::XmlNamespaceManager_NamespaceDeclaration value) {
            return il2cpp::box_value<app::XmlNamespaceManager_NamespaceDeclaration__Boxed>(get_class(), value);
        }
        inline app::XmlNamespaceManager_NamespaceDeclaration__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlNamespaceManager_NamespaceDeclaration__Array>(get_class(), size);
        }
        inline app::XmlNamespaceManager_NamespaceDeclaration__Array* create_array(const std::vector<app::XmlNamespaceManager_NamespaceDeclaration>& items) {
            return il2cpp::array_new<app::XmlNamespaceManager_NamespaceDeclaration__Array>(get_class(), items);
        }
    } // namespace XmlNamespaceManager_NamespaceDeclaration
} // namespace app::classes::types
