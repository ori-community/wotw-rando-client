#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlNodeReaderNavigator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlNodeReaderNavigator__Class** type_info;
        inline app::XmlNodeReaderNavigator__Class* get_class() {
            return il2cpp::get_class<app::XmlNodeReaderNavigator__Class>(type_info, "System.Xml", "XmlNodeReaderNavigator");
        }
        inline app::XmlNodeReaderNavigator* create() {
            return il2cpp::create_object<app::XmlNodeReaderNavigator>(get_class());
        }
    } // namespace XmlNodeReaderNavigator
} // namespace app::classes::types
