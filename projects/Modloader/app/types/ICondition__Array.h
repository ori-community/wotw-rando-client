#pragma once
#include <Modloader/app/structs/ICondition__Array.h>
#include <Modloader/app/structs/ICondition__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICondition__Array {
        inline app::ICondition__Array__Class** type_info() {
            static app::ICondition__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ICondition__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ICondition__Array__Class* get_class() {
            return il2cpp::get_class<app::ICondition__Array__Class>(type_info(), "", "ICondition[]");
        }
        inline app::ICondition__Array* create() {
            return il2cpp::create_object<app::ICondition__Array>(get_class());
        }
    } // namespace ICondition__Array
} // namespace app::classes::types
