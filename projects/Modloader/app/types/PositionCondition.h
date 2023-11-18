#pragma once
#include <Modloader/app/structs/PositionCondition.h>
#include <Modloader/app/structs/PositionCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PositionCondition {
        inline app::PositionCondition__Class** type_info() {
            static app::PositionCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PositionCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PositionCondition__Class* get_class() {
            return il2cpp::get_class<app::PositionCondition__Class>(type_info(), "", "PositionCondition");
        }
        inline app::PositionCondition* create() {
            return il2cpp::create_object<app::PositionCondition>(get_class());
        }
    } // namespace PositionCondition
} // namespace app::classes::types
