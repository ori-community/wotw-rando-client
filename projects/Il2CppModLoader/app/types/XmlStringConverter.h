#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlStringConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlStringConverter__Class** type_info;
        inline app::XmlStringConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlStringConverter__Class>(type_info, "System.Xml.Schema", "XmlStringConverter");
        }
        inline app::XmlStringConverter* create() {
            return il2cpp::create_object<app::XmlStringConverter>(get_class());
        }
    } // namespace XmlStringConverter
} // namespace app::classes::types
