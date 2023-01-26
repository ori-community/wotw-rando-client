#pragma once
#include <Modloader/app/structs/BlackboardVariableInt__Array.h>
#include <Modloader/app/structs/BlackboardVariableInt__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableInt__Array {
        inline app::BlackboardVariableInt__Array__Class** type_info() {
            static app::BlackboardVariableInt__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariableInt__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariableInt__Array__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableInt__Array__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariableInt[]");
        }
        inline app::BlackboardVariableInt__Array* create() {
            return il2cpp::create_object<app::BlackboardVariableInt__Array>(get_class());
        }
    } // namespace BlackboardVariableInt__Array
} // namespace app::classes::types
