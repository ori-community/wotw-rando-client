#pragma once
#include <Modloader/app/structs/XmlAnyElementAttribute.h>
#include <Modloader/app/structs/XmlAnyElementAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAnyElementAttribute {
        inline app::XmlAnyElementAttribute__Class** type_info() {
            static app::XmlAnyElementAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAnyElementAttribute__Class**)(modloader::win::memory::resolve_rva(0x04727C70));
            }
            return cache;
        }
        inline app::XmlAnyElementAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyElementAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlAnyElementAttribute");
        }
        inline app::XmlAnyElementAttribute* create() {
            return il2cpp::create_object<app::XmlAnyElementAttribute>(get_class());
        }
    } // namespace XmlAnyElementAttribute
} // namespace app::classes::types
