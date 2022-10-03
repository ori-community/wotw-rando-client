#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FloatUberState__Class** type_info;
        inline app::FloatUberState__Class* get_class() {
            return il2cpp::get_class<app::FloatUberState__Class>(type_info, "Moon", "FloatUberState");
        }
        inline app::FloatUberState* create() {
            return il2cpp::create_object<app::FloatUberState>(get_class());
        }
    } // namespace FloatUberState
} // namespace app::classes::types
