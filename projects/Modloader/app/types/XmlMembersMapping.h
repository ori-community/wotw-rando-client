#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlMembersMapping__Class.h>
#include <Modloader/app/structs/XmlMembersMapping.h>

namespace app::classes::types {
    namespace XmlMembersMapping {
        inline app::XmlMembersMapping__Class** type_info = (app::XmlMembersMapping__Class**)(modloader::win::memory::resolve_rva(0x0475E2E0));
        inline app::XmlMembersMapping__Class* get_class() {
            return il2cpp::get_class<app::XmlMembersMapping__Class>(type_info, "System.Xml.Serialization", "XmlMembersMapping");
        }
        inline app::XmlMembersMapping* create() {
            return il2cpp::create_object<app::XmlMembersMapping>(get_class());
        }
    } // namespace XmlMembersMapping
} // namespace app::classes::types
