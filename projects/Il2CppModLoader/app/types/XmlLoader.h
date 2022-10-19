#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlLoader {
        inline app::XmlLoader__Class** type_info = (app::XmlLoader__Class**)(modloader::win::memory::resolve_rva(0x04703D28));
        inline app::XmlLoader__Class* get_class() {
            return il2cpp::get_class<app::XmlLoader__Class>(type_info, "System.Xml", "XmlLoader");
        }
        inline app::XmlLoader* create() {
            return il2cpp::create_object<app::XmlLoader>(get_class());
        }
    } // namespace XmlLoader
} // namespace app::classes::types
