#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlTypeMapMemberFlatList__Class.h>
#include <Modloader/app/structs/XmlTypeMapMemberFlatList.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberFlatList {
        inline app::XmlTypeMapMemberFlatList__Class** type_info = (app::XmlTypeMapMemberFlatList__Class**)(modloader::win::memory::resolve_rva(0x0474AC80));
        inline app::XmlTypeMapMemberFlatList__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberFlatList__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberFlatList");
        }
        inline app::XmlTypeMapMemberFlatList* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberFlatList>(get_class());
        }
    } // namespace XmlTypeMapMemberFlatList
} // namespace app::classes::types
