#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LookupNode {
        inline app::LookupNode__Class** type_info = (app::LookupNode__Class**)(modloader::win::memory::resolve_rva(0x04798D20));
        inline app::LookupNode__Class* get_class() {
            return il2cpp::get_class<app::LookupNode__Class>(type_info, "System.Data", "LookupNode");
        }
        inline app::LookupNode* create() {
            return il2cpp::create_object<app::LookupNode>(get_class());
        }
    } // namespace LookupNode
} // namespace app::classes::types
