#pragma once
#include <Modloader/app/structs/XmlTypeMapMember.h>
#include <Modloader/app/structs/XmlTypeMapMember__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMember {
        inline app::XmlTypeMapMember__Class** type_info() {
            static app::XmlTypeMapMember__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeMapMember__Class**)(modloader::win::memory::resolve_rva(0x0476FF98));
            }
            return cache;
        }
        inline app::XmlTypeMapMember__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMember__Class>(type_info(), "System.Xml.Serialization", "XmlTypeMapMember");
        }
        inline app::XmlTypeMapMember* create() {
            return il2cpp::create_object<app::XmlTypeMapMember>(get_class());
        }
    } // namespace XmlTypeMapMember
} // namespace app::classes::types
