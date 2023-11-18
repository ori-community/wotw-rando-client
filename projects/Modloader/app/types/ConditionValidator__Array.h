#pragma once
#include <Modloader/app/structs/ConditionValidator__Array.h>
#include <Modloader/app/structs/ConditionValidator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionValidator__Array {
        inline app::ConditionValidator__Array__Class** type_info() {
            static app::ConditionValidator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionValidator__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionValidator__Array__Class* get_class() {
            return il2cpp::get_class<app::ConditionValidator__Array__Class>(type_info(), "", "ConditionValidator[]");
        }
        inline app::ConditionValidator__Array* create() {
            return il2cpp::create_object<app::ConditionValidator__Array>(get_class());
        }
    } // namespace ConditionValidator__Array
} // namespace app::classes::types
