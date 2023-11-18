#pragma once
#include <Modloader/app/structs/BlackboardVariable.h>
#include <Modloader/app/structs/BlackboardVariable__Array.h>
#include <Modloader/app/structs/BlackboardVariable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlackboardVariable {
        inline app::BlackboardVariable__Class** type_info() {
            static app::BlackboardVariable__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlackboardVariable__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlackboardVariable__Class* get_class() {
            return il2cpp::get_class<app::BlackboardVariable__Class>(type_info(), "Moon.BehaviourSystem", "BlackboardVariable");
        }
        inline app::BlackboardVariable* create() {
            return il2cpp::create_object<app::BlackboardVariable>(get_class());
        }
        inline app::BlackboardVariable__Array* create_array(int size) {
            return il2cpp::array_new<app::BlackboardVariable__Array>(get_class(), size);
        }
        inline app::BlackboardVariable__Array* create_array(const std::vector<app::BlackboardVariable*>& items) {
            return il2cpp::array_new<app::BlackboardVariable__Array>(get_class(), items);
        }
    } // namespace BlackboardVariable
} // namespace app::classes::types
