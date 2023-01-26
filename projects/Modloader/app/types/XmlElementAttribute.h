#pragma once
#include <Modloader/app/structs/XmlElementAttribute.h>
#include <Modloader/app/structs/XmlElementAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlElementAttribute {
        inline app::XmlElementAttribute__Class** type_info() {
            static app::XmlElementAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlElementAttribute__Class**)(modloader::win::memory::resolve_rva(0x0475B0D0));
            }
            return cache;
        }
        inline app::XmlElementAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlElementAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlElementAttribute");
        }
        inline app::XmlElementAttribute* create() {
            return il2cpp::create_object<app::XmlElementAttribute>(get_class());
        }
    } // namespace XmlElementAttribute
} // namespace app::classes::types
