#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsNotRunningBehaviourCondition {
        namespace {
            inline app::IsNotRunningBehaviourCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsNotRunningBehaviourCondition__Class** type_info = &type_info_ref;
        inline app::IsNotRunningBehaviourCondition__Class* get_class() {
            return il2cpp::get_class<app::IsNotRunningBehaviourCondition__Class>(type_info, "", "IsNotRunningBehaviourCondition");
        }
        inline app::IsNotRunningBehaviourCondition* create() {
            return il2cpp::create_object<app::IsNotRunningBehaviourCondition>(get_class());
        }
    } // namespace IsNotRunningBehaviourCondition
} // namespace app::classes::types
