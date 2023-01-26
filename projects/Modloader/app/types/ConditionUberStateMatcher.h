#pragma once
#include <Modloader/app/structs/ConditionUberStateMatcher.h>
#include <Modloader/app/structs/ConditionUberStateMatcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionUberStateMatcher {
        inline app::ConditionUberStateMatcher__Class** type_info() {
            static app::ConditionUberStateMatcher__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ConditionUberStateMatcher__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ConditionUberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::ConditionUberStateMatcher__Class>(type_info(), "", "ConditionUberStateMatcher");
        }
        inline app::ConditionUberStateMatcher* create() {
            return il2cpp::create_object<app::ConditionUberStateMatcher>(get_class());
        }
    } // namespace ConditionUberStateMatcher
} // namespace app::classes::types
