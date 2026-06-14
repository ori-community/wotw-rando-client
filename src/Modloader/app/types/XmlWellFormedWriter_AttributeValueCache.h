#pragma once
#include <Modloader/app/structs/XmlWellFormedWriter_AttributeValueCache.h>
#include <Modloader/app/structs/XmlWellFormedWriter_AttributeValueCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_AttributeValueCache {
        inline app::XmlWellFormedWriter_AttributeValueCache__Class** type_info() {
            static app::XmlWellFormedWriter_AttributeValueCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlWellFormedWriter_AttributeValueCache__Class**)(modloader::win::memory::resolve_rva(0x0473EDB8));
            }
            return cache;
        }
        inline app::XmlWellFormedWriter_AttributeValueCache__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_AttributeValueCache__Class>(type_info(), "System.Xml", "XmlWellFormedWriter", "AttributeValueCache");
        }
        inline app::XmlWellFormedWriter_AttributeValueCache* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_AttributeValueCache>(get_class());
        }
    } // namespace XmlWellFormedWriter_AttributeValueCache
} // namespace app::classes::types
