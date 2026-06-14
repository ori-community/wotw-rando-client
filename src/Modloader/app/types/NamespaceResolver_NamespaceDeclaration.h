#pragma once
#include <Modloader/app/structs/NamespaceResolver_NamespaceDeclaration.h>
#include <Modloader/app/structs/NamespaceResolver_NamespaceDeclaration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NamespaceResolver_NamespaceDeclaration {
        inline app::NamespaceResolver_NamespaceDeclaration__Class** type_info() {
            static app::NamespaceResolver_NamespaceDeclaration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NamespaceResolver_NamespaceDeclaration__Class**)(modloader::win::memory::resolve_rva(0x0478F918));
            }
            return cache;
        }
        inline app::NamespaceResolver_NamespaceDeclaration__Class* get_class() {
            return il2cpp::get_nested_class<app::NamespaceResolver_NamespaceDeclaration__Class>(type_info(), "System.Xml.Linq", "NamespaceResolver", "NamespaceDeclaration");
        }
        inline app::NamespaceResolver_NamespaceDeclaration* create() {
            return il2cpp::create_object<app::NamespaceResolver_NamespaceDeclaration>(get_class());
        }
    } // namespace NamespaceResolver_NamespaceDeclaration
} // namespace app::classes::types
