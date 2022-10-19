#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlAsyncCheckReader {
        inline app::XmlAsyncCheckReader__Class** type_info = (app::XmlAsyncCheckReader__Class**)(modloader::win::memory::resolve_rva(0x047035E0));
        inline app::XmlAsyncCheckReader__Class* get_class() {
            return il2cpp::get_class<app::XmlAsyncCheckReader__Class>(type_info, "System.Xml", "XmlAsyncCheckReader");
        }
        inline app::XmlAsyncCheckReader* create() {
            return il2cpp::create_object<app::XmlAsyncCheckReader>(get_class());
        }
    } // namespace XmlAsyncCheckReader
} // namespace app::classes::types
