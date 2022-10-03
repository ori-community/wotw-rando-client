#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DecoratorNode__Array {
        namespace {
            app::DecoratorNode__Array__Class* type_info_ref = nullptr;
        }
        app::DecoratorNode__Array__Class** type_info = &type_info_ref;
        inline app::DecoratorNode__Array__Class* get_class() {
            return il2cpp::get_class<app::DecoratorNode__Array__Class>(type_info, "Moon.BehaviourSystem", "DecoratorNode[]");
        }
        inline app::DecoratorNode__Array* create() {
            return il2cpp::create_object<app::DecoratorNode__Array>(get_class());
        }
    } // namespace DecoratorNode__Array
} // namespace app::classes::types
