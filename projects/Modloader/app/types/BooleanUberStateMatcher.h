#pragma once
#include <Modloader/app/structs/BooleanUberStateMatcher.h>
#include <Modloader/app/structs/BooleanUberStateMatcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BooleanUberStateMatcher {
        inline app::BooleanUberStateMatcher__Class** type_info() {
            static app::BooleanUberStateMatcher__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BooleanUberStateMatcher__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BooleanUberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberStateMatcher__Class>(type_info(), "", "BooleanUberStateMatcher");
        }
        inline app::BooleanUberStateMatcher* create() {
            return il2cpp::create_object<app::BooleanUberStateMatcher>(get_class());
        }
    } // namespace BooleanUberStateMatcher
} // namespace app::classes::types
