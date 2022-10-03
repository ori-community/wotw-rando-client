#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConditionUberStateMatcher {
        namespace {
            app::ConditionUberStateMatcher__Class* type_info_ref = nullptr;
        }
        app::ConditionUberStateMatcher__Class** type_info = &type_info_ref;
        inline app::ConditionUberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::ConditionUberStateMatcher__Class>(type_info, "", "ConditionUberStateMatcher");
        }
        inline app::ConditionUberStateMatcher* create() {
            return il2cpp::create_object<app::ConditionUberStateMatcher>(get_class());
        }
    } // namespace ConditionUberStateMatcher
} // namespace app::classes::types
