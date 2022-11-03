#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberAttribute__Array {
        inline app::XmlTypeMapMemberAttribute__Array__Class** type_info = (app::XmlTypeMapMemberAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x047044B8));
        inline app::XmlTypeMapMemberAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberAttribute__Array__Class>(type_info, "System.Xml.Serialization", "XmlTypeMapMemberAttribute[]");
        }
        inline app::XmlTypeMapMemberAttribute__Array* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberAttribute__Array>(get_class());
        }
    } // namespace XmlTypeMapMemberAttribute__Array
} // namespace app::classes::types
