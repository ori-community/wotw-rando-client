#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecoratorNode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DecoratorNode__Class** type_info;
        inline app::DecoratorNode__Class* get_class() {
            return il2cpp::get_class<app::DecoratorNode__Class>(type_info, "Moon.BehaviourSystem", "DecoratorNode");
        }
        inline app::DecoratorNode* create() {
            return il2cpp::create_object<app::DecoratorNode>(get_class());
        }
        inline app::DecoratorNode__Array* create_array(int size) {
            return il2cpp::array_new<app::DecoratorNode__Array>(get_class(), size);
        }
    } // namespace DecoratorNode
} // namespace app::classes::types
