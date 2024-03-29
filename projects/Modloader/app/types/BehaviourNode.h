#pragma once
#include <Modloader/app/structs/BehaviourNode.h>
#include <Modloader/app/structs/BehaviourNode__Array.h>
#include <Modloader/app/structs/BehaviourNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BehaviourNode {
        inline app::BehaviourNode__Class** type_info() {
            static app::BehaviourNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BehaviourNode__Class**)(modloader::win::memory::resolve_rva(0x0472EAB0));
            }
            return cache;
        }
        inline app::BehaviourNode__Class* get_class() {
            return il2cpp::get_class<app::BehaviourNode__Class>(type_info(), "Moon.BehaviourSystem", "BehaviourNode");
        }
        inline app::BehaviourNode* create() {
            return il2cpp::create_object<app::BehaviourNode>(get_class());
        }
        inline app::BehaviourNode__Array* create_array(int size) {
            return il2cpp::array_new<app::BehaviourNode__Array>(get_class(), size);
        }
        inline app::BehaviourNode__Array* create_array(const std::vector<app::BehaviourNode*>& items) {
            return il2cpp::array_new<app::BehaviourNode__Array>(get_class(), items);
        }
    } // namespace BehaviourNode
} // namespace app::classes::types
