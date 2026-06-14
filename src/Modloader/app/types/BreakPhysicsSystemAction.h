#pragma once
#include <Modloader/app/structs/BreakPhysicsSystemAction.h>
#include <Modloader/app/structs/BreakPhysicsSystemAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BreakPhysicsSystemAction {
        inline app::BreakPhysicsSystemAction__Class** type_info() {
            static app::BreakPhysicsSystemAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BreakPhysicsSystemAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BreakPhysicsSystemAction__Class* get_class() {
            return il2cpp::get_class<app::BreakPhysicsSystemAction__Class>(type_info(), "", "BreakPhysicsSystemAction");
        }
        inline app::BreakPhysicsSystemAction* create() {
            return il2cpp::create_object<app::BreakPhysicsSystemAction>(get_class());
        }
    } // namespace BreakPhysicsSystemAction
} // namespace app::classes::types
