#pragma once
#include <Modloader/app/structs/BlackboardVariableObject__Array.h>
#include <Modloader/app/structs/BlackboardVariableObject__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableObject__Array {
        inline app::BlackboardVariableObject__Array__Class** type_info() {
            static app::BlackboardVariableObject__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariableObject__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariableObject__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableObject__Array__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariableObject[]");
        }
        inline app::BlackboardVariableObject__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableObject__Array>(get_class());
        }
    } // namespace BlackboardVariableObject__Array
} // namespace app::classes::types
