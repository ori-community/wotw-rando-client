#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatRangeUberStatePair {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FloatRangeUberStatePair__Class** type_info;
        inline app::FloatRangeUberStatePair__Class* get_class() {
            return il2cpp::get_class<app::FloatRangeUberStatePair__Class>(type_info, "", "FloatRangeUberStatePair");
        }
        inline app::FloatRangeUberStatePair* create() {
            return il2cpp::create_object<app::FloatRangeUberStatePair>(get_class());
        }
    } // namespace FloatRangeUberStatePair
} // namespace app::classes::types
