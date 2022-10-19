#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTypeMapElementInfoList {
        inline app::XmlTypeMapElementInfoList__Class** type_info = (app::XmlTypeMapElementInfoList__Class**)(modloader::win::memory::resolve_rva(0x047570F0));
        inline app::XmlTypeMapElementInfoList__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapElementInfoList__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapElementInfoList");
        }
        inline app::XmlTypeMapElementInfoList* create() {
            return il2cpp::create_object<app::XmlTypeMapElementInfoList>(get_class());
        }
    } // namespace XmlTypeMapElementInfoList
} // namespace app::classes::types
