#pragma once
#include <Modloader/app/structs/BoolCondition.h>
#include <Modloader/app/structs/BoolCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoolCondition {
        inline app::BoolCondition__Class** type_info() {
            static app::BoolCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BoolCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BoolCondition__Class* get_class() {
            return il2cpp::get_class<app::BoolCondition__Class>(type_info(), "", "BoolCondition");
        }
        inline app::BoolCondition* create() {
            return il2cpp::create_object<app::BoolCondition>(get_class());
        }
    } // namespace BoolCondition
} // namespace app::classes::types
