#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FloatRangeUberStatePair {
        inline app::FloatRangeUberStatePair__Class** type_info = (app::FloatRangeUberStatePair__Class**)(modloader::win::memory::resolve_rva(0x047018C8));
        inline app::FloatRangeUberStatePair__Class* get_class() {
            return il2cpp::get_class<app::FloatRangeUberStatePair__Class>(type_info, "", "FloatRangeUberStatePair");
        }
        inline app::FloatRangeUberStatePair* create() {
            return il2cpp::create_object<app::FloatRangeUberStatePair>(get_class());
        }
    } // namespace FloatRangeUberStatePair
} // namespace app::classes::types
