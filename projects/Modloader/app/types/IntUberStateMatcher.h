#pragma once
#include <Modloader/app/structs/IntUberStateMatcher.h>
#include <Modloader/app/structs/IntUberStateMatcher__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IntUberStateMatcher {
        inline app::IntUberStateMatcher__Class** type_info() {
            static app::IntUberStateMatcher__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IntUberStateMatcher__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IntUberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::IntUberStateMatcher__Class>(type_info(), "", "IntUberStateMatcher");
        }
        inline app::IntUberStateMatcher* create() {
            return il2cpp::create_object<app::IntUberStateMatcher>(get_class());
        }
    } // namespace IntUberStateMatcher
} // namespace app::classes::types
