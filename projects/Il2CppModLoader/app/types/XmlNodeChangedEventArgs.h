#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNodeChangedEventArgs {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNodeChangedEventArgs__Class** type_info;
        inline app::XmlNodeChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeChangedEventArgs__Class>(type_info, "System.Xml", "XmlNodeChangedEventArgs");
        }
        inline app::XmlNodeChangedEventArgs* create() {
            return il2cpp::create_object<app::XmlNodeChangedEventArgs>(get_class());
        }
    } // namespace XmlNodeChangedEventArgs
} // namespace app::classes::types
