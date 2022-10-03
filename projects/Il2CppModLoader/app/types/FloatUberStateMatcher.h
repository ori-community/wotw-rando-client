#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatUberStateMatcher {
        namespace {
            app::FloatUberStateMatcher__Class* type_info_ref = nullptr;
        }
        app::FloatUberStateMatcher__Class** type_info = &type_info_ref;
        inline app::FloatUberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::FloatUberStateMatcher__Class>(type_info, "", "FloatUberStateMatcher");
        }
        inline app::FloatUberStateMatcher* create() {
            return il2cpp::create_object<app::FloatUberStateMatcher>(get_class());
        }
    } // namespace FloatUberStateMatcher
} // namespace app::classes::types
