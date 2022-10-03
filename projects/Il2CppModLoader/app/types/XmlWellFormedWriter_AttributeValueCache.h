#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_AttributeValueCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlWellFormedWriter_AttributeValueCache__Class** type_info;
        inline app::XmlWellFormedWriter_AttributeValueCache__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_AttributeValueCache__Class>(type_info, "System.Xml", "XmlWellFormedWriter", "AttributeValueCache");
        }
        inline app::XmlWellFormedWriter_AttributeValueCache* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_AttributeValueCache>(get_class());
        }
    } // namespace XmlWellFormedWriter_AttributeValueCache
} // namespace app::classes::types
