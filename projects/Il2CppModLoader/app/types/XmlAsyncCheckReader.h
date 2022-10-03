#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReader {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAsyncCheckReader__Class** type_info;
        inline app::XmlAsyncCheckReader__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReader__Class>(type_info, "System.Xml", "XmlAsyncCheckReader");
        }
        inline app::XmlAsyncCheckReader* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReader>(get_class());
        }
    } // namespace XmlAsyncCheckReader
} // namespace app::classes::types
