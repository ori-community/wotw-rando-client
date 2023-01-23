#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlReflectionMember__Class.h>
#include <Modloader/app/structs/XmlReflectionMember.h>
#include <Modloader/app/structs/XmlReflectionMember__Array.h>

namespace app::classes::types {
    namespace XmlReflectionMember {
        inline app::XmlReflectionMember__Class** type_info = (app::XmlReflectionMember__Class**)(modloader::win::memory::resolve_rva(0x0470E878));
        inline app::XmlReflectionMember__Class* get_class() {
            return il2cpp::get_class<app::XmlReflectionMember__Class>(type_info, "System.Xml.Serialization", "XmlReflectionMember");
        }
        inline app::XmlReflectionMember* create() {
            return il2cpp::create_object<app::XmlReflectionMember>(get_class());
        }
        inline app::XmlReflectionMember__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlReflectionMember__Array>(get_class(), size);
        }
        inline app::XmlReflectionMember__Array* create_array(const std::vector<app::XmlReflectionMember*>& items) {
            return il2cpp::array_new<app::XmlReflectionMember__Array>(get_class(), items);
        }
    } // namespace XmlReflectionMember
} // namespace app::classes::types
