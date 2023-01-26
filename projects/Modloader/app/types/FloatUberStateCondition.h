#pragma once
#include <Modloader/app/structs/FloatUberStateCondition.h>
#include <Modloader/app/structs/FloatUberStateCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatUberStateCondition {
        inline app::FloatUberStateCondition__Class** type_info() {
            static app::FloatUberStateCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatUberStateCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatUberStateCondition__Class* get_class() {
            return il2cpp::get_class<app::FloatUberStateCondition__Class>(type_info(), "", "FloatUberStateCondition");
        }
        inline app::FloatUberStateCondition* create() {
            return il2cpp::create_object<app::FloatUberStateCondition>(get_class());
        }
    } // namespace FloatUberStateCondition
} // namespace app::classes::types
