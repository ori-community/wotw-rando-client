#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlValidatingReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlValidatingReader__Class** type_info;
        inline app::XmlValidatingReader__Class* get_class() {
            return il2cpp::get_class<app::XmlValidatingReader__Class>(type_info, "System.Xml", "XmlValidatingReader");
        }
        inline app::XmlValidatingReader* create() {
            return il2cpp::create_object<app::XmlValidatingReader>(get_class());
        }
    } // namespace XmlValidatingReader
} // namespace app::classes::types
