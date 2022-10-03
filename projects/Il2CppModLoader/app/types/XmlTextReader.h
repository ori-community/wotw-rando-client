#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlTextReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlTextReader__Class** type_info;
        inline app::XmlTextReader__Class* get_class() {
            return il2cpp::get_class<app::XmlTextReader__Class>(type_info, "System.Xml", "XmlTextReader");
        }
        inline app::XmlTextReader* create() {
            return il2cpp::create_object<app::XmlTextReader>(get_class());
        }
    } // namespace XmlTextReader
} // namespace app::classes::types
