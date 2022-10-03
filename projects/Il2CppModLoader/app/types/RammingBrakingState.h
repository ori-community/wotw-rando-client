#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RammingBrakingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RammingBrakingState__Class** type_info;
        inline app::RammingBrakingState__Class* get_class() {
            return il2cpp::get_class<app::RammingBrakingState__Class>(type_info, "", "RammingBrakingState");
        }
        inline app::RammingBrakingState* create() {
            return il2cpp::create_object<app::RammingBrakingState>(get_class());
        }
    } // namespace RammingBrakingState
} // namespace app::classes::types
