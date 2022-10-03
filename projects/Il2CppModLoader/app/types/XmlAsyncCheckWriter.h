#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAsyncCheckWriter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAsyncCheckWriter__Class** type_info;
        inline app::XmlAsyncCheckWriter__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckWriter__Class>(type_info, "System.Xml", "XmlAsyncCheckWriter");
        }
        inline app::XmlAsyncCheckWriter* create() {
            return il2cpp::create_object<app::XmlAsyncCheckWriter>(get_class());
        }
    } // namespace XmlAsyncCheckWriter
} // namespace app::classes::types
