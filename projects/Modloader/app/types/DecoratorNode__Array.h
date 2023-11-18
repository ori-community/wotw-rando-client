#pragma once
#include <Modloader/app/structs/DecoratorNode__Array.h>
#include <Modloader/app/structs/DecoratorNode__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DecoratorNode__Array {
        inline app::DecoratorNode__Array__Class** type_info() {
            static app::DecoratorNode__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DecoratorNode__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DecoratorNode__Array__Class* get_class() {
            return il2cpp::get_class<app::DecoratorNode__Array__Class>(type_info(), "Moon.BehaviourSystem", "DecoratorNode[]");
        }
        inline app::DecoratorNode__Array* create() {
            return il2cpp::create_object<app::DecoratorNode__Array>(get_class());
        }
    } // namespace DecoratorNode__Array
} // namespace app::classes::types
