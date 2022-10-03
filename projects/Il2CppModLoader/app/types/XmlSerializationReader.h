#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlSerializationReader {
        namespace {
            app::XmlSerializationReader__Class* type_info_ref = nullptr;
        }
        app::XmlSerializationReader__Class** type_info = &type_info_ref;
        inline app::XmlSerializationReader__Class* get_class() {
            return il2cpp::get_class<app::XmlSerializationReader__Class>(type_info, "System.Xml.Serialization", "XmlSerializationReader");
        }
        inline app::XmlSerializationReader* create() {
            return il2cpp::create_object<app::XmlSerializationReader>(get_class());
        }
    } // namespace XmlSerializationReader
} // namespace app::classes::types
