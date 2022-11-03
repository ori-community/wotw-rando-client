#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_AttributeValueCache_Item {
        inline app::XmlWellFormedWriter_AttributeValueCache_Item__Class** type_info = (app::XmlWellFormedWriter_AttributeValueCache_Item__Class**)(modloader::win::memory::resolve_rva(0x04715208));
        inline app::XmlWellFormedWriter_AttributeValueCache_Item__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_AttributeValueCache_Item__Class>(type_info, "System.Xml", "XmlWellFormedWriter+AttributeValueCache", "Item");
        }
        inline app::XmlWellFormedWriter_AttributeValueCache_Item* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_AttributeValueCache_Item>(get_class());
        }
        inline app::XmlWellFormedWriter_AttributeValueCache_Item__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlWellFormedWriter_AttributeValueCache_Item__Array>(get_class(), size);
        }
        inline app::XmlWellFormedWriter_AttributeValueCache_Item__Array* create_array(const std::vector<app::XmlWellFormedWriter_AttributeValueCache_Item*>& items) {
            return il2cpp::array_new<app::XmlWellFormedWriter_AttributeValueCache_Item__Array>(get_class(), items);
        }
    } // namespace XmlWellFormedWriter_AttributeValueCache_Item
} // namespace app::classes::types
