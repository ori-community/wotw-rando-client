#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SchemaNamespaceManager {
        inline app::SchemaNamespaceManager__Class** type_info = (app::SchemaNamespaceManager__Class**)(modloader::win::memory::resolve_rva(0x04704B60));
        inline app::SchemaNamespaceManager__Class* get_class() {
            return il2cpp::get_class<app::SchemaNamespaceManager__Class>(type_info, "System.Xml.Schema", "SchemaNamespaceManager");
        }
        inline app::SchemaNamespaceManager* create() {
            return il2cpp::create_object<app::SchemaNamespaceManager>(get_class());
        }
    } // namespace SchemaNamespaceManager
} // namespace app::classes::types
