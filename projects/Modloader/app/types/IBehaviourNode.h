#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IBehaviourNode {
        inline app::IBehaviourNode__Class** type_info = (app::IBehaviourNode__Class**)(modloader::win::memory::resolve_rva(0x04754E00));
        inline app::IBehaviourNode__Class* get_class() {
            return il2cpp::get_class<app::IBehaviourNode__Class>(type_info, "Moon.BehaviourSystem", "IBehaviourNode");
        }
        inline app::IBehaviourNode__Array* create_array(int size) {
            return il2cpp::array_new<app::IBehaviourNode__Array>(get_class(), size);
        }
        inline app::IBehaviourNode__Array* create_array(const std::vector<app::IBehaviourNode*>& items) {
            return il2cpp::array_new<app::IBehaviourNode__Array>(get_class(), items);
        }
    } // namespace IBehaviourNode
} // namespace app::classes::types
