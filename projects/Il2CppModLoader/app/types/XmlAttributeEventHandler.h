#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAttributeEventHandler {
        namespace {
            app::XmlAttributeEventHandler__Class* type_info_ref = nullptr;
        }
        app::XmlAttributeEventHandler__Class** type_info = &type_info_ref;
        inline app::XmlAttributeEventHandler__Class* get_class() {
            return il2cpp::get_class<app::XmlAttributeEventHandler__Class>(type_info, "System.Xml.Serialization", "XmlAttributeEventHandler");
        }
        inline app::XmlAttributeEventHandler* create() {
            return il2cpp::create_object<app::XmlAttributeEventHandler>(get_class());
        }
    } // namespace XmlAttributeEventHandler
} // namespace app::classes::types
