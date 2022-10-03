#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlReader__Class** type_info;
        inline app::XmlReader__Class* get_class() {
            return il2cpp::get_class<app::XmlReader__Class>(type_info, "System.Xml", "XmlReader");
        }
        inline app::XmlReader* create() {
            return il2cpp::create_object<app::XmlReader>(get_class());
        }
    } // namespace XmlReader
} // namespace app::classes::types
