#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializerImplementation {
        namespace {
            app::XmlSerializerImplementation__Class* type_info_ref = nullptr;
        }
        app::XmlSerializerImplementation__Class** type_info = &type_info_ref;
        inline app::XmlSerializerImplementation__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializerImplementation__Class>(type_info, "System.Xml.Serialization", "XmlSerializerImplementation");
        }
        inline app::XmlSerializerImplementation* create() {
            return il2cpp::create_object<app::XmlSerializerImplementation>(get_class());
        }
    } // namespace XmlSerializerImplementation
} // namespace app::classes::types
