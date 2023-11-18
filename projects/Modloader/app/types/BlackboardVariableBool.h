#pragma once
#include <Modloader/app/structs/BlackboardVariableBool.h>
#include <Modloader/app/structs/BlackboardVariableBool__Array.h>
#include <Modloader/app/structs/BlackboardVariableBool__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableBool {
        inline app::BlackboardVariableBool__Class** type_info() {
            static app::BlackboardVariableBool__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariableBool__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariableBool__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableBool__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariableBool");
        }
        inline app::BlackboardVariableBool* create() {
            return il2cpp::create_object<app::BlackboardVariableBool>(get_class());
        }
        inline app::BlackboardVariableBool__Array* create_array(int size) {
            return il2cpp::array_new<app::BlackboardVariableBool__Array>(get_class(), size);
        }
        inline app::BlackboardVariableBool__Array* create_array(const std::vector<app::BlackboardVariableBool*>& items) {
            return il2cpp::array_new<app::BlackboardVariableBool__Array>(get_class(), items);
        }
    } // namespace BlackboardVariableBool
} // namespace app::classes::types
