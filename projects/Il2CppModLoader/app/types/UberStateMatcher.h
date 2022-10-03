#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateMatcher {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberStateMatcher__Class** type_info;
        inline app::UberStateMatcher__Class* get_class() {
            return il2cpp::get_class<app::UberStateMatcher__Class>(type_info, "", "UberStateMatcher");
        }
        inline app::UberStateMatcher* create() {
            return il2cpp::create_object<app::UberStateMatcher>(get_class());
        }
    } // namespace UberStateMatcher
} // namespace app::classes::types
