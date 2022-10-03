#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlMiscConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlMiscConverter__Class** type_info;
        inline app::XmlMiscConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlMiscConverter__Class>(type_info, "System.Xml.Schema", "XmlMiscConverter");
        }
        inline app::XmlMiscConverter* create() {
            return il2cpp::create_object<app::XmlMiscConverter>(get_class());
        }
    } // namespace XmlMiscConverter
} // namespace app::classes::types
