#pragma once
#include <Modloader/app/structs/DecoratorNode.h>
#include <Modloader/app/structs/DecoratorNode__Array.h>
#include <Modloader/app/structs/DecoratorNode__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecoratorNode {
        inline app::DecoratorNode__Class** type_info() {
            static app::DecoratorNode__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DecoratorNode__Class**)(modloader::win::memory::resolve_rva(0x0478EC40));
            }
            return cache;
        }
        inline app::DecoratorNode__Class* get_class() {
            return il2cpp::get_class<app::DecoratorNode__Class>(type_info(), "Moon.BehaviourSystem", "DecoratorNode");
        }
        inline app::DecoratorNode* create() {
            return il2cpp::create_object<app::DecoratorNode>(get_class());
        }
        inline app::DecoratorNode__Array* create_array(int size) {
            return il2cpp::array_new<app::DecoratorNode__Array>(get_class(), size);
        }
        inline app::DecoratorNode__Array* create_array(const std::vector<app::DecoratorNode*>& items) {
            return il2cpp::array_new<app::DecoratorNode__Array>(get_class(), items);
        }
    } // namespace DecoratorNode
} // namespace app::classes::types
