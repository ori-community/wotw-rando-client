#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IsTriggerCollidingCondition__Class.h>
#include <Modloader/app/structs/IsTriggerCollidingCondition.h>

namespace app::classes::types {
    namespace IsTriggerCollidingCondition {
        namespace {
            inline app::IsTriggerCollidingCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsTriggerCollidingCondition__Class** type_info = &type_info_ref;
        inline app::IsTriggerCollidingCondition__Class* get_class() {
            return il2cpp::get_class<app::IsTriggerCollidingCondition__Class>(type_info, "", "IsTriggerCollidingCondition");
        }
        inline app::IsTriggerCollidingCondition* create() {
            return il2cpp::create_object<app::IsTriggerCollidingCondition>(get_class());
        }
    } // namespace IsTriggerCollidingCondition
} // namespace app::classes::types
