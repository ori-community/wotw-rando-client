#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BooleanUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BooleanUberState__Class** type_info;
        inline app::BooleanUberState__Class* get_class() {
            return il2cpp::get_class<app::BooleanUberState__Class>(type_info, "Moon", "BooleanUberState");
        }
        inline app::BooleanUberState* create() {
            return il2cpp::create_object<app::BooleanUberState>(get_class());
        }
    } // namespace BooleanUberState
} // namespace app::classes::types
