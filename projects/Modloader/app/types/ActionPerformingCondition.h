#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActionPerformingCondition__Class.h>
#include <Modloader/app/structs/ActionPerformingCondition.h>

namespace app::classes::types {
    namespace ActionPerformingCondition {
        namespace {
            inline app::ActionPerformingCondition__Class* type_info_ref = nullptr;
        }
        inline app::ActionPerformingCondition__Class** type_info = &type_info_ref;
        inline app::ActionPerformingCondition__Class* get_class() {
            return il2cpp::get_class<app::ActionPerformingCondition__Class>(type_info, "", "ActionPerformingCondition");
        }
        inline app::ActionPerformingCondition* create() {
            return il2cpp::create_object<app::ActionPerformingCondition>(get_class());
        }
    } // namespace ActionPerformingCondition
} // namespace app::classes::types
