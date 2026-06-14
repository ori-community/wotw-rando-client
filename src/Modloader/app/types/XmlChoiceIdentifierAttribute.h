#pragma once
#include <Modloader/app/structs/XmlChoiceIdentifierAttribute.h>
#include <Modloader/app/structs/XmlChoiceIdentifierAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XmlChoiceIdentifierAttribute {
        inline app::XmlChoiceIdentifierAttribute__Class** type_info() {
            static app::XmlChoiceIdentifierAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XmlChoiceIdentifierAttribute__Class**)(modloader::win::memory::resolve_rva(0x047194E0));
            }
            return cache;
        }
        inline app::XmlChoiceIdentifierAttribute__Class* get_class() {
            return il2cpp::get_class<app::XmlChoiceIdentifierAttribute__Class>(type_info(), "System.Xml.Serialization", "XmlChoiceIdentifierAttribute");
        }
        inline app::XmlChoiceIdentifierAttribute* create() {
            return il2cpp::create_object<app::XmlChoiceIdentifierAttribute>(get_class());
        }
    } // namespace XmlChoiceIdentifierAttribute
} // namespace app::classes::types
