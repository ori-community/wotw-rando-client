#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BooleanUberStateMatcher {
        namespace {
            app::BooleanUberStateMatcher__Class* type_info_ref = nullptr;
        }
        app::BooleanUberStateMatcher__Class** type_info = &type_info_ref;
        inline app::BooleanUberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberStateMatcher__Class>(type_info, "", "BooleanUberStateMatcher");
        }
        inline app::BooleanUberStateMatcher* create() {
            return il2cpp::create_object<app::BooleanUberStateMatcher>(get_class());
        }
    } // namespace BooleanUberStateMatcher
} // namespace app::classes::types
