#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReaderWithLineInfoNS {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAsyncCheckReaderWithLineInfoNS__Class** type_info;
        inline app::XmlAsyncCheckReaderWithLineInfoNS__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReaderWithLineInfoNS__Class>(type_info, "System.Xml", "XmlAsyncCheckReaderWithLineInfoNS");
        }
        inline app::XmlAsyncCheckReaderWithLineInfoNS* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReaderWithLineInfoNS>(get_class());
        }
    } // namespace XmlAsyncCheckReaderWithLineInfoNS
} // namespace app::classes::types
