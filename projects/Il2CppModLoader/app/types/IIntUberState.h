#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IIntUberState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IIntUberState__Class** type_info;
        inline app::IIntUberState__Class* get_class() {
            return il2cpp::get_class<app::IIntUberState__Class>(type_info, "Moon", "IIntUberState");
        }
        inline app::IIntUberState* create() {
            return il2cpp::create_object<app::IIntUberState>(get_class());
        }
    } // namespace IIntUberState
} // namespace app::classes::types
