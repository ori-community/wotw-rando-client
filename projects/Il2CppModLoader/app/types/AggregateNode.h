#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AggregateNode {
        inline app::AggregateNode__Class** type_info = (app::AggregateNode__Class**)(modloader::win::memory::resolve_rva(0x04744E98));
        inline app::AggregateNode__Class* get_class() {
            return il2cpp::get_class<app::AggregateNode__Class>(type_info, "System.Data", "AggregateNode");
        }
        inline app::AggregateNode* create() {
            return il2cpp::create_object<app::AggregateNode>(get_class());
        }
    } // namespace AggregateNode
} // namespace app::classes::types
