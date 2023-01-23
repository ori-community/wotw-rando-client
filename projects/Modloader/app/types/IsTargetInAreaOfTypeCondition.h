#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsTargetInAreaOfTypeCondition__Class.h>
#include <Modloader/app/structs/IsTargetInAreaOfTypeCondition.h>

namespace app::classes::types {
    namespace IsTargetInAreaOfTypeCondition {
        namespace {
            inline app::IsTargetInAreaOfTypeCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsTargetInAreaOfTypeCondition__Class** type_info = &type_info_ref;
        inline app::IsTargetInAreaOfTypeCondition__Class* get_class() {
            return il2cpp::get_class<app::IsTargetInAreaOfTypeCondition__Class>(type_info, "Moon.BehaviourSystem", "IsTargetInAreaOfTypeCondition");
        }
        inline app::IsTargetInAreaOfTypeCondition* create() {
            return il2cpp::create_object<app::IsTargetInAreaOfTypeCondition>(get_class());
        }
    } // namespace IsTargetInAreaOfTypeCondition
} // namespace app::classes::types
