#pragma once
#include <Modloader/app/structs/TurtleAttackSelector.h>
#include <Modloader/app/structs/TurtleAttackSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TurtleAttackSelector {
        inline app::TurtleAttackSelector__Class** type_info() {
            static app::TurtleAttackSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TurtleAttackSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TurtleAttackSelector__Class* get_class() {
            return il2cpp::get_class<app::TurtleAttackSelector__Class>(type_info(), "", "TurtleAttackSelector");
        }
        inline app::TurtleAttackSelector* create() {
            return il2cpp::create_object<app::TurtleAttackSelector>(get_class());
        }
    } // namespace TurtleAttackSelector
} // namespace app::classes::types
