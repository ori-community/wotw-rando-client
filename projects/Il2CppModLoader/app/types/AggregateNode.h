#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AggregateNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AggregateNode__Class** type_info;
        inline app::AggregateNode__Class* get_class() {
            return il2cpp::get_class<app::AggregateNode__Class>(type_info, "System.Data", "AggregateNode");
        }
        inline app::AggregateNode* create() {
            return il2cpp::create_object<app::AggregateNode>(get_class());
        }
    } // namespace AggregateNode
} // namespace app::classes::types
