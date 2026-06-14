#pragma once
#include <Modloader/app/structs/XmlEnumAttribute.h>
#include <Modloader/app/structs/XmlEnumAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlEnumAttribute {
        inline app::XmlEnumAttribute__Class** type_info() {
            static app::XmlEnumAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlEnumAttribute__Class**)(modloader::win::memory::resolve_rva(0x0473DC60));
            }
            return cache;
        }
        inline app::XmlEnumAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlEnumAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlEnumAttribute");
        }
        inline app::XmlEnumAttribute* create() {
            return il2cpp::create_object<app::XmlEnumAttribute>(get_class());
        }
    } // namespace XmlEnumAttribute
} // namespace app::classes::types
