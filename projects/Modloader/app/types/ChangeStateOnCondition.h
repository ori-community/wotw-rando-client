#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ChangeStateOnCondition__Class.h>
#include <Modloader/app/structs/ChangeStateOnCondition.h>

namespace app::classes::types {
    namespace ChangeStateOnCondition {
        namespace {
            inline app::ChangeStateOnCondition__Class* type_info_ref = nullptr;
        }
        inline app::ChangeStateOnCondition__Class** type_info = &type_info_ref;
        inline app::ChangeStateOnCondition__Class* get_class() {
            return il2cpp::get_class<app::ChangeStateOnCondition__Class>(type_info, "Moon.Setups", "ChangeStateOnCondition");
        }
        inline app::ChangeStateOnCondition* create() {
            return il2cpp::create_object<app::ChangeStateOnCondition>(get_class());
        }
    } // namespace ChangeStateOnCondition
} // namespace app::classes::types
