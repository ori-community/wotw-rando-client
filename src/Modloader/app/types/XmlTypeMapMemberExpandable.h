#pragma once
#include <Modloader/app/structs/XmlTypeMapMemberExpandable.h>
#include <Modloader/app/structs/XmlTypeMapMemberExpandable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberExpandable {
        inline app::XmlTypeMapMemberExpandable__Class** type_info() {
            static app::XmlTypeMapMemberExpandable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeMapMemberExpandable__Class**)(modloader::win::memory::resolve_rva(0x047170A0));
            }
            return cache;
        }
        inline app::XmlTypeMapMemberExpandable__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberExpandable__Class>(type_info(), "System.Xml.Serialization", "XmlTypeMapMemberExpandable");
        }
        inline app::XmlTypeMapMemberExpandable* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberExpandable>(get_class());
        }
    } // namespace XmlTypeMapMemberExpandable
} // namespace app::classes::types
