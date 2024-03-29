#pragma once
#include <Modloader/app/structs/BlackboardVariableString.h>
#include <Modloader/app/structs/BlackboardVariableString__Array.h>
#include <Modloader/app/structs/BlackboardVariableString__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariableString {
        inline app::BlackboardVariableString__Class** type_info() {
            static app::BlackboardVariableString__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariableString__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariableString__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariableString__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariableString");
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
