#pragma once
#include <Modloader/app/structs/FloatUberStateMatcher.h>
#include <Modloader/app/structs/FloatUberStateMatcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FloatUberStateMatcher {
        inline app::FloatUberStateMatcher__Class** type_info() {
            static app::FloatUberStateMatcher__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FloatUberStateMatcher__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FloatUberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::FloatUberStateMatcher__Class>(type_info(), "", "FloatUberStateMatcher");
        }
        inline app::FloatUberStateMatcher* create() {
            return il2cpp::create_object<app::FloatUberStateMatcher>(get_class());
        }
    } // namespace FloatUberStateMatcher
} // namespace app::classes::types
