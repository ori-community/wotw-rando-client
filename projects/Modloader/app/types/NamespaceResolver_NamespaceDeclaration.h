#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NamespaceResolver_NamespaceDeclaration {
        inline app::NamespaceResolver_NamespaceDeclaration__Class** type_info = (app::NamespaceResolver_NamespaceDeclaration__Class**)(modloader::win::memory::resolve_rva(0x0478F918));
        inline app::NamespaceResolver_NamespaceDeclaration__Class* get_class() {
            return il2cpp::get_nested_class<app::NamespaceResolver_NamespaceDeclaration__Class>(type_info, "System.Xml.Linq", "NamespaceResolver", "NamespaceDeclaration");
        }
        inline app::NamespaceResolver_NamespaceDeclaration* create() {
            return il2cpp::create_object<app::NamespaceResolver_NamespaceDeclaration>(get_class());
        }
    } // namespace NamespaceResolver_NamespaceDeclaration
} // namespace app::classes::types
