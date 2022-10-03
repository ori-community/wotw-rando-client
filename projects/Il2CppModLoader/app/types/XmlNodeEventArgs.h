#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNodeEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNodeEventArgs__Class** type_info;
        inline app::XmlNodeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeEventArgs__Class>(type_info, "System.Xml.Serialization", "XmlNodeEventArgs");
        }
        inline app::XmlNodeEventArgs* create() {
            return il2cpp::create_object<app::XmlNodeEventArgs>(get_class());
        }
    } // namespace XmlNodeEventArgs
} // namespace app::classes::types
