#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_AttributeValueCache_BufferChunk {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlWellFormedWriter_AttributeValueCache_BufferChunk__Class** type_info;
        inline app::XmlWellFormedWriter_AttributeValueCache_BufferChunk__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_AttributeValueCache_BufferChunk__Class>(type_info, "System.Xml", "XmlWellFormedWriter+AttributeValueCache", "BufferChunk");
        }
        inline app::XmlWellFormedWriter_AttributeValueCache_BufferChunk* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_AttributeValueCache_BufferChunk>(get_class());
        }
    } // namespace XmlWellFormedWriter_AttributeValueCache_BufferChunk
} // namespace app::classes::types
