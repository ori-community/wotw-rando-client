#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlException__Class** type_info;
        inline app::XmlException__Class* get_class() {
            return il2cpp::get_class<app::XmlException__Class>(type_info, "System.Xml", "XmlException");
        }
        inline app::XmlException* create() {
            return il2cpp::create_object<app::XmlException>(get_class());
        }
    } // namespace XmlException
} // namespace app::classes::types
