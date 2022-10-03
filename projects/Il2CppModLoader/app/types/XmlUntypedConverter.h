#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlUntypedConverter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlUntypedConverter__Class** type_info;
        inline app::XmlUntypedConverter__Class* get_class() {
            return il2cpp::get_class<app::XmlUntypedConverter__Class>(type_info, "System.Xml.Schema", "XmlUntypedConverter");
        }
        inline app::XmlUntypedConverter* create() {
            return il2cpp::create_object<app::XmlUntypedConverter>(get_class());
        }
    } // namespace XmlUntypedConverter
} // namespace app::classes::types
