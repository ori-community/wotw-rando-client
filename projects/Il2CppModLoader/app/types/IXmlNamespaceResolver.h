#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IXmlNamespaceResolver {
        inline app::IXmlNamespaceResolver__Class** type_info = (app::IXmlNamespaceResolver__Class**)(modloader::win::memory::resolve_rva(0x04794C50));
        inline app::IXmlNamespaceResolver__Class* get_class() {
            return il2cpp::get_class<app::IXmlNamespaceResolver__Class>(type_info, "System.Xml", "IXmlNamespaceResolver");
        }
    } // namespace IXmlNamespaceResolver
} // namespace app::classes::types
