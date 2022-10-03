#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishFallState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishFallState__Class** type_info;
        inline app::FishFallState__Class* get_class() {
            return il2cpp::get_class<app::FishFallState__Class>(type_info, "", "FishFallState");
        }
        inline app::FishFallState* create() {
            return il2cpp::create_object<app::FishFallState>(get_class());
        }
    } // namespace FishFallState
} // namespace app::classes::types
