#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlIgnoreNamespaceReader {
        inline app::XmlIgnoreNamespaceReader__Class** type_info = (app::XmlIgnoreNamespaceReader__Class**)(modloader::win::memory::resolve_rva(0x04737418));
        inline app::XmlIgnoreNamespaceReader__Class* get_class() {
            return il2cpp::get_class<app::XmlIgnoreNamespaceReader__Class>(type_info, "System.Data", "XmlIgnoreNamespaceReader");
        }
        inline app::XmlIgnoreNamespaceReader* create() {
            return il2cpp::create_object<app::XmlIgnoreNamespaceReader>(get_class());
        }
    } // namespace XmlIgnoreNamespaceReader
} // namespace app::classes::types
