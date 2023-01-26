#pragma once
#include <Modloader/app/structs/BlackboardVariableInt.h>
#include <Modloader/app/structs/BlackboardVariableInt__Array.h>
#include <Modloader/app/structs/BlackboardVariableInt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableInt {
        inline app::BlackboardVariableInt__Class** type_info() {
            static app::BlackboardVariableInt__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariableInt__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariableInt__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableInt__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariableInt");
        }
        inline app::BlackboardVariableInt* create() {
            return il2cpp::create_object<app::BlackboardVariableInt>(get_class());
        }
        inline app::BlackboardVariableInt__Array* create_array(int size) {
            return il2cpp::array_new<app::BlackboardVariableInt__Array>(get_class(), size);
        }
        inline app::BlackboardVariableInt__Array* create_array(const std::vector<app::BlackboardVariableInt*>& items) {
            return il2cpp::array_new<app::BlackboardVariableInt__Array>(get_class(), items);
        }
    } // namespace BlackboardVariableInt
} // namespace app::classes::types
