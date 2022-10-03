#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntUberStateMatcher_IntRangeUberStatePair {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IntUberStateMatcher_IntRangeUberStatePair__Class** type_info;
        inline app::IntUberStateMatcher_IntRangeUberStatePair__Class* get_class() {
            return il2cpp::get_nested_class<app::IntUberStateMatcher_IntRangeUberStatePair__Class>(type_info, "", "IntUberStateMatcher", "IntRangeUberStatePair");
        }
        inline app::IntUberStateMatcher_IntRangeUberStatePair* create() {
            return il2cpp::create_object<app::IntUberStateMatcher_IntRangeUberStatePair>(get_class());
        }
    } // namespace IntUberStateMatcher_IntRangeUberStatePair
} // namespace app::classes::types
