#pragma once
#include <Modloader/app/structs/XmlWellFormedWriter_AttributeValueCache_ItemType__Enum.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_AttributeValueCache_ItemType__Enum {
        inline app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Class** type_info() {
            static app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum__Class>(type_info(), "System.Xml", "XmlWellFormedWriter+AttributeValueCache", "ItemType");
        }
        inline app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_AttributeValueCache_ItemType__Enum>(get_class());
        }
    } // namespace XmlWellFormedWriter_AttributeValueCache_ItemType__Enum
} // namespace app::classes::types
