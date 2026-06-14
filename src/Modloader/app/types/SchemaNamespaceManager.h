#pragma once
#include <Modloader/app/structs/SchemaNamespaceManager.h>
#include <Modloader/app/structs/SchemaNamespaceManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SchemaNamespaceManager {
        inline app::SchemaNamespaceManager__Class** type_info() {
            static app::SchemaNamespaceManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SchemaNamespaceManager__Class**)(modloader::win::memory::resolve_rva(0x04704B60));
            }
            return cache;
        }
        inline app::SchemaNamespaceManager__Class* get_class() {
            return il2cpp::get_class<app::SchemaNamespaceManager__Class>(type_info(), "System.Xml.Schema", "SchemaNamespaceManager");
        }
        inline app::SchemaNamespaceManager* create() {
            return il2cpp::create_object<app::SchemaNamespaceManager>(get_class());
        }
    } // namespace SchemaNamespaceManager
} // namespace app::classes::types
