#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishBounceState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishBounceState__Class** type_info;
        inline app::FishBounceState__Class* get_class() {
            return il2cpp::get_class<app::FishBounceState__Class>(type_info, "", "FishBounceState");
        }
        inline app::FishBounceState* create() {
            return il2cpp::create_object<app::FishBounceState>(get_class());
        }
    } // namespace FishBounceState
} // namespace app::classes::types
