#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberExpandable {
        inline app::XmlTypeMapMemberExpandable__Class** type_info = (app::XmlTypeMapMemberExpandable__Class**)(modloader::win::memory::resolve_rva(0x047170A0));
        inline app::XmlTypeMapMemberExpandable__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberExpandable__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberExpandable");
        }
        inline app::XmlTypeMapMemberExpandable* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberExpandable>(get_class());
        }
    } // namespace XmlTypeMapMemberExpandable
} // namespace app::classes::types
