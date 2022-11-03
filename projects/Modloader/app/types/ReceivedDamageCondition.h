#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReceivedDamageCondition {
        namespace {
            inline app::ReceivedDamageCondition__Class* type_info_ref = nullptr;
        }
        inline app::ReceivedDamageCondition__Class** type_info = &type_info_ref;
        inline app::ReceivedDamageCondition__Class* get_class() {
            return il2cpp::get_class<app::ReceivedDamageCondition__Class>(type_info, "Moon.BehaviourSystem", "ReceivedDamageCondition");
        }
        inline app::ReceivedDamageCondition* create() {
            return il2cpp::create_object<app::ReceivedDamageCondition>(get_class());
        }
    } // namespace ReceivedDamageCondition
} // namespace app::classes::types
