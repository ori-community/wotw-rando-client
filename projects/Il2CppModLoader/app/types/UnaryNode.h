#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnaryNode {
        inline app::UnaryNode__Class** type_info = (app::UnaryNode__Class**)(modloader::win::memory::resolve_rva(0x04705A30));
        inline app::UnaryNode__Class* get_class() {
            return il2cpp::get_class<app::UnaryNode__Class>(type_info, "System.Data", "UnaryNode");
        }
        inline app::UnaryNode* create() {
            return il2cpp::create_object<app::UnaryNode>(get_class());
        }
    } // namespace UnaryNode
} // namespace app::classes::types
