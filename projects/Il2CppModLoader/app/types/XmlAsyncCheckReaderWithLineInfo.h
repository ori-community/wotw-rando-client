#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReaderWithLineInfo {
        inline app::XmlAsyncCheckReaderWithLineInfo__Class** type_info = (app::XmlAsyncCheckReaderWithLineInfo__Class**)(modloader::win::memory::resolve_rva(0x047010C0));
        inline app::XmlAsyncCheckReaderWithLineInfo__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReaderWithLineInfo__Class>(type_info, "System.Xml", "XmlAsyncCheckReaderWithLineInfo");
        }
        inline app::XmlAsyncCheckReaderWithLineInfo* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReaderWithLineInfo>(get_class());
        }
    } // namespace XmlAsyncCheckReaderWithLineInfo
} // namespace app::classes::types
