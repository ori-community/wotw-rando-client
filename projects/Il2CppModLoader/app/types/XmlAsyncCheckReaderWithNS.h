#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReaderWithNS {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAsyncCheckReaderWithNS__Class** type_info;
        inline app::XmlAsyncCheckReaderWithNS__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReaderWithNS__Class>(type_info, "System.Xml", "XmlAsyncCheckReaderWithNS");
        }
        inline app::XmlAsyncCheckReaderWithNS* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReaderWithNS>(get_class());
        }
    } // namespace XmlAsyncCheckReaderWithNS
} // namespace app::classes::types
