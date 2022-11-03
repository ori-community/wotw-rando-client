#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NameNode {
        inline app::NameNode__Class** type_info = (app::NameNode__Class**)(modloader::win::memory::resolve_rva(0x04745B10));
        inline app::NameNode__Class* get_class() {
            return il2cpp::get_class<app::NameNode__Class>(type_info, "System.Data", "NameNode");
        }
        inline app::NameNode* create() {
            return il2cpp::create_object<app::NameNode>(get_class());
        }
    } // namespace NameNode
} // namespace app::classes::types
