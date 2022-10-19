#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer {
        inline app::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__Class** type_info = (app::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__Class**)(modloader::win::memory::resolve_rva(0x047160A8));
        inline app::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer__Class>(type_info, "System.Xml", "XmlTextReaderImpl", "DtdDefaultAttributeInfoToNodeDataComparer");
        }
        inline app::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer* create() {
            return il2cpp::create_object<app::XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer>(get_class());
        }
    } // namespace XmlTextReaderImpl_DtdDefaultAttributeInfoToNodeDataComparer
} // namespace app::classes::types
