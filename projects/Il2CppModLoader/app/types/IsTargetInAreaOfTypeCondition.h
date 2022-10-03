#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IsTargetInAreaOfTypeCondition {
        namespace {
            app::IsTargetInAreaOfTypeCondition__Class* type_info_ref = nullptr;
        }
        app::IsTargetInAreaOfTypeCondition__Class** type_info = &type_info_ref;
        inline app::IsTargetInAreaOfTypeCondition__Class* get_class() {
            return il2cpp::get_class<app::IsTargetInAreaOfTypeCondition__Class>(type_info, "Moon.BehaviourSystem", "IsTargetInAreaOfTypeCondition");
        }
        inline app::IsTargetInAreaOfTypeCondition* create() {
            return il2cpp::create_object<app::IsTargetInAreaOfTypeCondition>(get_class());
        }
    } // namespace IsTargetInAreaOfTypeCondition
} // namespace app::classes::types
