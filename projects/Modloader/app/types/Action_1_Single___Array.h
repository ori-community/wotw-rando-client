#pragma once
#include <Modloader/app/structs/Action_1_Single___Array.h>
#include <Modloader/app/structs/Action_1_Single___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Action_1_Single___Array {
        inline app::Action_1_Single___Array__Class** type_info() {
            static app::Action_1_Single___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Action_1_Single___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Action_1_Single___Array__Class* get_class() {
            return il2cpp::get_class<app::Action_1_Single___Array__Class>(type_info(), "System", "Action`1[Single][]");
        }
        inline app::Action_1_Single___Array* create() {
            return il2cpp::create_object<app::Action_1_Single___Array>(get_class());
        }
    } // namespace Action_1_Single___Array
} // namespace app::classes::types
