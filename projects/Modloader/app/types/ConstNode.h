#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstNode {
        inline app::ConstNode__Class** type_info = (app::ConstNode__Class**)(modloader::win::memory::resolve_rva(0x04746638));
        inline app::ConstNode__Class* get_class() {
            return il2cpp::get_class<app::ConstNode__Class>(type_info, "System.Data", "ConstNode");
        }
        inline app::ConstNode* create() {
            return il2cpp::create_object<app::ConstNode>(get_class());
        }
    } // namespace ConstNode
} // namespace app::classes::types
