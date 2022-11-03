#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_AttributeValueCache_Item__Array {
        inline app::XmlWellFormedWriter_AttributeValueCache_Item__Array__Class** type_info = (app::XmlWellFormedWriter_AttributeValueCache_Item__Array__Class**)(modloader::win::memory::resolve_rva(0x04743B88));
        inline app::XmlWellFormedWriter_AttributeValueCache_Item__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlWellFormedWriter_AttributeValueCache_Item__Array__Class>(type_info, "System.Xml", "XmlWellFormedWriter+AttributeValueCache+Item[]");
        }
        inline app::XmlWellFormedWriter_AttributeValueCache_Item__Array* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_AttributeValueCache_Item__Array>(get_class());
        }
    } // namespace XmlWellFormedWriter_AttributeValueCache_Item__Array
} // namespace app::classes::types
