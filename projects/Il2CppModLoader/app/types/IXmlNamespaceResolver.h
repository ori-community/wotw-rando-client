#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IXmlNamespaceResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IXmlNamespaceResolver__Class** type_info;
        inline app::IXmlNamespaceResolver__Class* get_class() {
            return il2cpp::get_class<app::IXmlNamespaceResolver__Class>(type_info, "System.Xml", "IXmlNamespaceResolver");
        }
    } // namespace IXmlNamespaceResolver
} // namespace app::classes::types
