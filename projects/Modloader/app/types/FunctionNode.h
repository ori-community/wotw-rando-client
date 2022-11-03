#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FunctionNode {
        inline app::FunctionNode__Class** type_info = (app::FunctionNode__Class**)(modloader::win::memory::resolve_rva(0x04790698));
        inline app::FunctionNode__Class* get_class() {
            return il2cpp::get_class<app::FunctionNode__Class>(type_info, "System.Data", "FunctionNode");
        }
        inline app::FunctionNode* create() {
            return il2cpp::create_object<app::FunctionNode>(get_class());
        }
    } // namespace FunctionNode
} // namespace app::classes::types
