#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AggregateNode__Class.h>
#include <Modloader/app/structs/AggregateNode.h>

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
