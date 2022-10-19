#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberList {
        inline app::XmlTypeMapMemberList__Class** type_info = (app::XmlTypeMapMemberList__Class**)(modloader::win::memory::resolve_rva(0x047364B8));
        inline app::XmlTypeMapMemberList__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberList__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberList");
        }
        inline app::XmlTypeMapMemberList* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberList>(get_class());
        }
    } // namespace XmlTypeMapMemberList
} // namespace app::classes::types
