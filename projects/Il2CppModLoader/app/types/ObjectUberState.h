#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjectUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjectUberState__Class** type_info;
        inline app::ObjectUberState__Class* get_class() {
            return il2cpp::get_class<app::ObjectUberState__Class>(type_info, "Moon", "ObjectUberState");
        }
        inline app::ObjectUberState* create() {
            return il2cpp::create_object<app::ObjectUberState>(get_class());
        }
    } // namespace ObjectUberState
} // namespace app::classes::types
