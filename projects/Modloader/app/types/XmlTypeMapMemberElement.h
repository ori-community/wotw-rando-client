#pragma once
#include <Modloader/app/structs/XmlTypeMapMemberElement.h>
#include <Modloader/app/structs/XmlTypeMapMemberElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberElement {
        inline app::XmlTypeMapMemberElement__Class** type_info() {
            static app::XmlTypeMapMemberElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeMapMemberElement__Class**)(modloader::win::memory::resolve_rva(0x0474F7D0));
            }
            return cache;
        }
        inline app::XmlTypeMapMemberElement__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberElement__Class>(type_info(), "System.Xml.Serialization", "XmlTypeMapMemberElement");
        }
        inline app::XmlTypeMapMemberElement* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberElement>(get_class());
        }
    } // namespace XmlTypeMapMemberElement
} // namespace app::classes::types
