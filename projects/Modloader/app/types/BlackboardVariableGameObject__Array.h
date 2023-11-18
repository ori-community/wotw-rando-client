#pragma once
#include <Modloader/app/structs/BlackboardVariableGameObject__Array.h>
#include <Modloader/app/structs/BlackboardVariableGameObject__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableGameObject__Array {
        inline app::BlackboardVariableGameObject__Array__Class** type_info() {
            static app::BlackboardVariableGameObject__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariableGameObject__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariableGameObject__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableGameObject__Array__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariableGameObject[]");
        }
        inline app::BlackboardVariableGameObject__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableGameObject__Array>(get_class());
        }
    } // namespace BlackboardVariableGameObject__Array
} // namespace app::classes::types
