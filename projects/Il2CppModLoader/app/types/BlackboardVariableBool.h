#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlackboardVariableBool {
        namespace {
            inline app::BlackboardVariableBool__Class* type_info_ref = nullptr;
        }
        inline app::BlackboardVariableBool__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableBool__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableBool__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableBool");
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
