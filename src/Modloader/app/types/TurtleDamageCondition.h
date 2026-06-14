#pragma once
#include <Modloader/app/structs/TurtleDamageCondition.h>
#include <Modloader/app/structs/TurtleDamageCondition__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleDamageCondition {
        inline app::TurtleDamageCondition__Class** type_info() {
            static app::TurtleDamageCondition__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleDamageCondition__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleDamageCondition__Class* get_class() {
            return il2cpp::get_class<app::TurtleDamageCondition__Class>(type_info(), "", "TurtleDamageCondition");
        }
        inline app::TurtleDamageCondition* create() {
            return il2cpp::create_object<app::TurtleDamageCondition>(get_class());
        }
    } // namespace TurtleDamageCondition
} // namespace app::classes::types
