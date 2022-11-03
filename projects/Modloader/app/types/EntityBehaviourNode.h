#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityBehaviourNode {
        inline app::EntityBehaviourNode__Class** type_info = (app::EntityBehaviourNode__Class**)(modloader::win::memory::resolve_rva(0x0474D460));
        inline app::EntityBehaviourNode__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviourNode__Class>(type_info, "Moon.BehaviourSystem", "EntityBehaviourNode");
        }
        inline app::EntityBehaviourNode* create() {
            return il2cpp::create_object<app::EntityBehaviourNode>(get_class());
        }
        inline app::EntityBehaviourNode__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityBehaviourNode__Array>(get_class(), size);
        }
        inline app::EntityBehaviourNode__Array* create_array(const std::vector<app::EntityBehaviourNode*>& items) {
            return il2cpp::array_new<app::EntityBehaviourNode__Array>(get_class(), items);
        }
    } // namespace EntityBehaviourNode
} // namespace app::classes::types
