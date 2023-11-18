#pragma once
#include <Modloader/app/structs/XmlTypeMapMemberAnyAttribute.h>
#include <Modloader/app/structs/XmlTypeMapMemberAnyAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberAnyAttribute {
        inline app::XmlTypeMapMemberAnyAttribute__Class** type_info() {
            static app::XmlTypeMapMemberAnyAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeMapMemberAnyAttribute__Class**)(modloader::win::memory::resolve_rva(0x04701710));
            }
            return cache;
        }
        inline app::XmlTypeMapMemberAnyAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberAnyAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlTypeMapMemberAnyAttribute");
        }
        inline app::XmlTypeMapMemberAnyAttribute* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberAnyAttribute>(get_class());
        }
    } // namespace XmlTypeMapMemberAnyAttribute
} // namespace app::classes::types
