#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BreakPhysicsSystemAction {
        namespace {
            app::BreakPhysicsSystemAction__Class* type_info_ref = nullptr;
        }
        app::BreakPhysicsSystemAction__Class** type_info = &type_info_ref;
        inline app::BreakPhysicsSystemAction__Class* get_class() {
            return il2cpp::get_class<app::BreakPhysicsSystemAction__Class>(type_info, "", "BreakPhysicsSystemAction");
        }
        inline app::BreakPhysicsSystemAction* create() {
            return il2cpp::create_object<app::BreakPhysicsSystemAction>(get_class());
        }
    } // namespace BreakPhysicsSystemAction
} // namespace app::classes::types
