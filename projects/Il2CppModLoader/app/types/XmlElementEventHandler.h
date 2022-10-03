#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlElementEventHandler {
        namespace {
            app::XmlElementEventHandler__Class* type_info_ref = nullptr;
        }
        app::XmlElementEventHandler__Class** type_info = &type_info_ref;
        inline app::XmlElementEventHandler__Class* get_class() {
            return il2cpp::get_class<app::XmlElementEventHandler__Class>(type_info, "System.Xml.Serialization", "XmlElementEventHandler");
        }
        inline app::XmlElementEventHandler* create() {
            return il2cpp::create_object<app::XmlElementEventHandler>(get_class());
        }
    } // namespace XmlElementEventHandler
} // namespace app::classes::types
