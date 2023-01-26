#pragma once
#include <Modloader/app/structs/XmlAnyAttributeAttribute.h>
#include <Modloader/app/structs/XmlAnyAttributeAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlAnyAttributeAttribute {
        inline app::XmlAnyAttributeAttribute__Class** type_info() {
            static app::XmlAnyAttributeAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlAnyAttributeAttribute__Class**)(modloader::win::memory::resolve_rva(0x0470EB78));
            }
            return cache;
        }
        inline app::XmlAnyAttributeAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlAnyAttributeAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlAnyAttributeAttribute");
        }
        inline app::XmlAnyAttributeAttribute* create() {
            return il2cpp::create_object<app::XmlAnyAttributeAttribute>(get_class());
        }
    } // namespace XmlAnyAttributeAttribute
} // namespace app::classes::types
