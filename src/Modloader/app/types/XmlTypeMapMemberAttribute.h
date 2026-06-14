#pragma once
#include <Modloader/app/structs/XmlTypeMapMemberAttribute.h>
#include <Modloader/app/structs/XmlTypeMapMemberAttribute__Array.h>
#include <Modloader/app/structs/XmlTypeMapMemberAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlTypeMapMemberAttribute {
        inline app::XmlTypeMapMemberAttribute__Class** type_info() {
            static app::XmlTypeMapMemberAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlTypeMapMemberAttribute__Class**)(modloader::win::memory::resolve_rva(0x04715878));
            }
            return cache;
        }
        inline app::XmlTypeMapMemberAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlTypeMapMemberAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlTypeMapMemberAttribute");
        }
        inline app::XmlTypeMapMemberAttribute* create() {
            return il2cpp::create_object<app::XmlTypeMapMemberAttribute>(get_class());
        }
        inline app::XmlTypeMapMemberAttribute__Array* create_array(int size) {
            return il2cpp::array_new<app::XmlTypeMapMemberAttribute__Array>(get_class(), size);
        }
        inline app::XmlTypeMapMemberAttribute__Array* create_array(const std::vector<app::XmlTypeMapMemberAttribute*>& items) {
            return il2cpp::array_new<app::XmlTypeMapMemberAttribute__Array>(get_class(), items);
        }
    } // namespace XmlTypeMapMemberAttribute
} // namespace app::classes::types
