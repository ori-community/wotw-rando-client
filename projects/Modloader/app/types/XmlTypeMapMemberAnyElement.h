#pragma once
#include <Modloader/app/structs/XmlTypeMapMemberAnyElement.h>
#include <Modloader/app/structs/XmlTypeMapMemberAnyElement__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberAnyElement {
        inline app::XmlTypeMapMemberAnyElement__Class** type_info() {
            static app::XmlTypeMapMemberAnyElement__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeMapMemberAnyElement__Class**)(modloader::win::memory::resolve_rva(0x04756E08));
            }
            return cache;
        }
        inline app::XmlTypeMapMemberAnyElement__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberAnyElement__Class>(type_info(), "System.Xml.Serialization", "XmlTypeMapMemberAnyElement");
        }
        inline app::XmlTypeMapMemberAnyElement* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberAnyElement>(get_class());
        }
    } // namespace XmlTypeMapMemberAnyElement
} // namespace app::classes::types
