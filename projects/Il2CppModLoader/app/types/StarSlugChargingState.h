#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StarSlugChargingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StarSlugChargingState__Class** type_info;
        inline app::StarSlugChargingState__Class* get_class() {
            return il2cpp::get_class<app::StarSlugChargingState__Class>(type_info, "", "StarSlugChargingState");
        }
        inline app::StarSlugChargingState* create() {
            return il2cpp::create_object<app::StarSlugChargingState>(get_class());
        }
    } // namespace StarSlugChargingState
} // namespace app::classes::types
