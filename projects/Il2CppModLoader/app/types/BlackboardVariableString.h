#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlackboardVariableString {
        namespace {
            inline app::BlackboardVariableString__Class* type_info_ref = nullptr;
        }
        inline app::BlackboardVariableString__Class** type_info = &type_info_ref;
        inline app::BlackboardVariableString__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableString__Class>(type_info, "Moon.BehaviourSystem", "BlackboardVariableString");
        }
        inline app::BlackboardVariableString* create() {
            return il2cpp::create_object<app::BlackboardVariableString>(get_class());
        }
        inline app::BlackboardVariableString__Array* create_array(int size) {
            return il2cpp::array_new<app::BlackboardVariableString__Array>(get_class(), size);
        }
        inline app::BlackboardVariableString__Array* create_array(const std::vector<app::BlackboardVariableString*>& items) {
            return il2cpp::array_new<app::BlackboardVariableString__Array>(get_class(), items);
        }
    } // namespace BlackboardVariableString
} // namespace app::classes::types
