#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlElementEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlElementEventArgs__Class** type_info;
        inline app::XmlElementEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XmlElementEventArgs__Class>(type_info, "System.Xml.Serialization", "XmlElementEventArgs");
        }
        inline app::XmlElementEventArgs* create() {
            return il2cpp::create_object<app::XmlElementEventArgs>(get_class());
        }
    } // namespace XmlElementEventArgs
} // namespace app::classes::types
