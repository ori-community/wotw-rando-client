#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WormEmergingState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WormEmergingState__Class** type_info;
        inline app::WormEmergingState__Class* get_class() {
            return il2cpp::get_class<app::WormEmergingState__Class>(type_info, "", "WormEmergingState");
        }
        inline app::WormEmergingState* create() {
            return il2cpp::create_object<app::WormEmergingState>(get_class());
        }
    } // namespace WormEmergingState
} // namespace app::classes::types
