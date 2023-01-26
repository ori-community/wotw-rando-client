#pragma once
#include <Modloader/app/structs/XmlTypeMapMemberAttribute__Array.h>
#include <Modloader/app/structs/XmlTypeMapMemberAttribute__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberAttribute__Array {
        inline app::XmlTypeMapMemberAttribute__Array__Class** type_info() {
            static app::XmlTypeMapMemberAttribute__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeMapMemberAttribute__Array__Class**)(modloader::win::memory::resolve_rva(0x047044B8));
            }
            return cache;
        }
        inline app::XmlTypeMapMemberAttribute__Array__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberAttribute__Array__Class>(type_info(), "System.Xml.Serialization", "XmlTypeMapMemberAttribute[]");
        }
        inline app::XmlTypeMapMemberAttribute__Array* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberAttribute__Array>(get_class());
        }
    } // namespace XmlTypeMapMemberAttribute__Array
} // namespace app::classes::types
