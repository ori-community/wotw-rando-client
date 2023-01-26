#pragma once
#include <Modloader/app/structs/XmlTypeMapMemberList.h>
#include <Modloader/app/structs/XmlTypeMapMemberList__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberList {
        inline app::XmlTypeMapMemberList__Class** type_info() {
            static app::XmlTypeMapMemberList__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeMapMemberList__Class**)(modloader::win::memory::resolve_rva(0x047364B8));
            }
            return cache;
        }
        inline app::XmlTypeMapMemberList__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberList__Class>(type_info(), "System.Xml.Serialization", "XmlTypeMapMemberList");
        }
        inline app::XmlTypeMapMemberList* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberList>(get_class());
        }
    } // namespace XmlTypeMapMemberList
} // namespace app::classes::types
