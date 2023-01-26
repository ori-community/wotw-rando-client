#pragma once
#include <Modloader/app/structs/XmlTypeMapMemberNamespaces.h>
#include <Modloader/app/structs/XmlTypeMapMemberNamespaces__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberNamespaces {
        inline app::XmlTypeMapMemberNamespaces__Class** type_info() {
            static app::XmlTypeMapMemberNamespaces__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeMapMemberNamespaces__Class**)(modloader::win::memory::resolve_rva(0x04752988));
            }
            return cache;
        }
        inline app::XmlTypeMapMemberNamespaces__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberNamespaces__Class>(type_info(), "System.Xml.Serialization", "XmlTypeMapMemberNamespaces");
        }
        inline app::XmlTypeMapMemberNamespaces* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberNamespaces>(get_class());
        }
    } // namespace XmlTypeMapMemberNamespaces
} // namespace app::classes::types
