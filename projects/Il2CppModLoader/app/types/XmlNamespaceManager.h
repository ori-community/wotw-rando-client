#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XmlNamespaceManager {
        inline app::XmlNamespaceManager__Class** type_info = (app::XmlNamespaceManager__Class**)(modloader::win::memory::resolve_rva(0x0478CE90));
        inline app::XmlNamespaceManager__Class* get_class() {
            return il2cpp::get_class<app::XmlNamespaceManager__Class>(type_info, "System.Xml", "XmlNamespaceManager");
        }
        inline app::XmlNamespaceManager* create() {
            return il2cpp::create_object<app::XmlNamespaceManager>(get_class());
        }
    } // namespace XmlNamespaceManager
} // namespace app::classes::types
