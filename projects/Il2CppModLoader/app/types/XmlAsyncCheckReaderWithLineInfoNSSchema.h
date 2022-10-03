#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReaderWithLineInfoNSSchema {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class** type_info;
        inline app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReaderWithLineInfoNSSchema__Class>(type_info, "System.Xml", "XmlAsyncCheckReaderWithLineInfoNSSchema");
        }
        inline app::XmlAsyncCheckReaderWithLineInfoNSSchema* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReaderWithLineInfoNSSchema>(get_class());
        }
    } // namespace XmlAsyncCheckReaderWithLineInfoNSSchema
} // namespace app::classes::types
