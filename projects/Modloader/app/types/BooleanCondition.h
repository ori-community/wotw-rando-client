#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BooleanCondition__Class.h>
#include <Modloader/app/structs/BooleanCondition.h>

namespace app::classes::types {
    namespace BooleanCondition {
        namespace {
            inline app::BooleanCondition__Class* type_info_ref = nullptr;
        }
        inline app::BooleanCondition__Class** type_info = &type_info_ref;
        inline app::BooleanCondition__Class* get_class() {
            return il2cpp::get_class<app::BooleanCondition__Class>(type_info, "Moon.BehaviourSystem", "BooleanCondition");
        }
        inline app::BooleanCondition* create() {
            return il2cpp::create_object<app::BooleanCondition>(get_class());
        }
    } // namespace BooleanCondition
} // namespace app::classes::types
