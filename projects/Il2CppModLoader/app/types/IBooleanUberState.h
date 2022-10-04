#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IBooleanUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IBooleanUberState__Class** type_info;
        inline app::IBooleanUberState__Class* get_class() {
            return il2cpp::get_class<app::IBooleanUberState__Class>(type_info, "Moon", "IBooleanUberState");
        }
        inline app::IBooleanUberState* create() {
            return il2cpp::create_object<app::IBooleanUberState>(get_class());
        }
    } // namespace IBooleanUberState
} // namespace app::classes::types
