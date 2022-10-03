#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IntUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IntUberState__Class** type_info;
        inline app::IntUberState__Class* get_class() {
            return il2cpp::get_class<app::IntUberState__Class>(type_info, "Moon", "IntUberState");
        }
        inline app::IntUberState* create() {
            return il2cpp::create_object<app::IntUberState>(get_class());
        }
    } // namespace IntUberState
} // namespace app::classes::types
