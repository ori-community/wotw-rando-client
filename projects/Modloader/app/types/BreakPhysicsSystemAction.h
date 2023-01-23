#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BreakPhysicsSystemAction__Class.h>
#include <Modloader/app/structs/BreakPhysicsSystemAction.h>

namespace app::classes::types {
    namespace BreakPhysicsSystemAction {
        namespace {
            inline app::BreakPhysicsSystemAction__Class* type_info_ref = nullptr;
        }
        inline app::BreakPhysicsSystemAction__Class** type_info = &type_info_ref;
        inline app::BreakPhysicsSystemAction__Class* get_class() {
            return il2cpp::get_class<app::BreakPhysicsSystemAction__Class>(type_info, "", "BreakPhysicsSystemAction");
        }
        inline app::BreakPhysicsSystemAction* create() {
            return il2cpp::create_object<app::BreakPhysicsSystemAction>(get_class());
        }
    } // namespace BreakPhysicsSystemAction
} // namespace app::classes::types
