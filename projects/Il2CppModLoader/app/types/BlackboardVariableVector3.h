#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlackboardVariableVector3 {
        namespace {
            inline app::BlackboardVariableVector3__Class* type_info_ref = nullptr;
        }
        inline app::BlackboardVariableVector3__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableVector3__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableVector3__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableVector3");
        }
        inline app::BlackboardVariableVector3* create() {
            return il2cpp::create_object<app::BlackboardVariableVector3>(get_class());
        }
        inline app::BlackboardVariableVector3__Array* create_array(int size) {
            return il2cpp::array_new<app::BlackboardVariableVector3__Array>(get_class(), size);
        }
        inline app::BlackboardVariableVector3__Array* create_array(const std::vector<app::BlackboardVariableVector3*>& items) {
            return il2cpp::array_new<app::BlackboardVariableVector3__Array>(get_class(), items);
        }
    } // namespace BlackboardVariableVector3
} // namespace app::classes::types
