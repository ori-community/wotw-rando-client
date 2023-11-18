#pragma once
#include <Modloader/app/structs/IXmlNamespaceResolver.h>
#include <Modloader/app/structs/IXmlNamespaceResolver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IXmlNamespaceResolver {
        inline app::IXmlNamespaceResolver__Class** type_info() {
            static app::IXmlNamespaceResolver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IXmlNamespaceResolver__Class**)(modloader::win::memory::resolve_rva(0x04794C50));
            }
            return cache;
        }
        inline app::IXmlNamespaceResolver__Class* get_class() {
            return il2cpp::get_class<app::IXmlNamespaceResolver__Class>(type_info(), "System.Xml", "IXmlNamespaceResolver");
        }
    } // namespace IXmlNamespaceResolver
} // namespace app::classes::types
