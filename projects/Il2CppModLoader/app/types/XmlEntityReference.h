#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlEntityReference {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlEntityReference__Class** type_info;
        inline app::XmlEntityReference__Class* get_class() {
            return il2cpp::get_class<app::XmlEntityReference__Class>(type_info, "System.Xml", "XmlEntityReference");
        }
        inline app::XmlEntityReference* create() {
            return il2cpp::create_object<app::XmlEntityReference>(get_class());
        }
    } // namespace XmlEntityReference
} // namespace app::classes::types
