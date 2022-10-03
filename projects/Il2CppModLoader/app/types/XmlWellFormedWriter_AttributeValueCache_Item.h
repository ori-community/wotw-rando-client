#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_AttributeValueCache_Item {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlWellFormedWriter_AttributeValueCache_Item__Class** type_info;
        inline app::XmlWellFormedWriter_AttributeValueCache_Item__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_AttributeValueCache_Item__Class>(type_info, "System.Xml", "XmlWellFormedWriter+AttributeValueCache", "Item");
        }
        inline app::XmlWellFormedWriter_AttributeValueCache_Item* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_AttributeValueCache_Item>(get_class());
        }
        inline app::XmlWellFormedWriter_AttributeValueCache_Item__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlWellFormedWriter_AttributeValueCache_Item__Array>(get_class(), size);
        }
    } // namespace XmlWellFormedWriter_AttributeValueCache_Item
} // namespace app::classes::types
