#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BinaryNode {
        inline app::BinaryNode__Class** type_info = (app::BinaryNode__Class**)(modloader::win::memory::resolve_rva(0x04763E78));
        inline app::BinaryNode__Class* get_class() {
            return il2cpp::get_class<app::BinaryNode__Class>(type_info, "System.Data", "BinaryNode");
        }
        inline app::BinaryNode* create() {
            return il2cpp::create_object<app::BinaryNode>(get_class());
        }
    } // namespace BinaryNode
} // namespace app::classes::types
