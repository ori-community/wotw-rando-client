#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NamespaceListNode {
        inline app::NamespaceListNode__Class** type_info = (app::NamespaceListNode__Class**)(modloader::win::memory::resolve_rva(0x047158E8));
        inline app::NamespaceListNode__Class* get_class() {
            return il2cpp::get_class<app::NamespaceListNode__Class>(type_info, "System.Xml.Schema", "NamespaceListNode");
        }
        inline app::NamespaceListNode* create() {
            return il2cpp::create_object<app::NamespaceListNode>(get_class());
        }
    } // namespace NamespaceListNode
} // namespace app::classes::types
