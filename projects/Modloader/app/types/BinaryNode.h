#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BinaryNode__Class.h>
#include <Modloader/app/structs/BinaryNode.h>

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
