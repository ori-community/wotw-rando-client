#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReaderWithLineInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XmlAsyncCheckReaderWithLineInfo__Class** type_info;
        inline app::XmlAsyncCheckReaderWithLineInfo__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReaderWithLineInfo__Class>(type_info, "System.Xml", "XmlAsyncCheckReaderWithLineInfo");
        }
        inline app::XmlAsyncCheckReaderWithLineInfo* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReaderWithLineInfo>(get_class());
        }
    } // namespace XmlAsyncCheckReaderWithLineInfo
} // namespace app::classes::types
