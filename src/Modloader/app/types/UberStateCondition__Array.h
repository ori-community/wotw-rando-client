#pragma once
#include <Modloader/app/structs/UberStateCondition__Array.h>
#include <Modloader/app/structs/UberStateCondition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateCondition__Array {
        inline app::UberStateCondition__Array__Class** type_info() {
            static app::UberStateCondition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateCondition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateCondition__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateCondition__Array__Class>(type_info(), "", "UberStateCondition[]");
        }
        inline app::UberStateCondition__Array* create() {
            return il2cpp::create_object<app::UberStateCondition__Array>(get_class());
        }
    } // namespace UberStateCondition__Array
} // namespace app::classes::types
