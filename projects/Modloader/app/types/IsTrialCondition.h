#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IsTrialCondition {
        namespace {
            inline app::IsTrialCondition__Class* type_info_ref = nullptr;
        }
        inline app::IsTrialCondition__Class** type_info = &type_info_ref;
        inline app::IsTrialCondition__Class* get_class() {
            return il2cpp::get_class<app::IsTrialCondition__Class>(type_info, "", "IsTrialCondition");
        }
        inline app::IsTrialCondition* create() {
            return il2cpp::create_object<app::IsTrialCondition>(get_class());
        }
    } // namespace IsTrialCondition
} // namespace app::classes::types
