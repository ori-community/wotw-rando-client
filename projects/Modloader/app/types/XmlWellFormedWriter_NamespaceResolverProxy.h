#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XmlWellFormedWriter_NamespaceResolverProxy__Class.h>
#include <Modloader/app/structs/XmlWellFormedWriter_NamespaceResolverProxy.h>

namespace app::classes::types {
    namespace XmlWellFormedWriter_NamespaceResolverProxy {
        inline app::XmlWellFormedWriter_NamespaceResolverProxy__Class** type_info = (app::XmlWellFormedWriter_NamespaceResolverProxy__Class**)(modloader::win::memory::resolve_rva(0x0473D708));
        inline app::XmlWellFormedWriter_NamespaceResolverProxy__Class* get_class() {
            return il2cpp::get_nested_class<app::XmlWellFormedWriter_NamespaceResolverProxy__Class>(type_info, "System.Xml", "XmlWellFormedWriter", "NamespaceResolverProxy");
        }
        inline app::XmlWellFormedWriter_NamespaceResolverProxy* create() {
            return il2cpp::create_object<app::XmlWellFormedWriter_NamespaceResolverProxy>(get_class());
        }
    } // namespace XmlWellFormedWriter_NamespaceResolverProxy
} // namespace app::classes::types
