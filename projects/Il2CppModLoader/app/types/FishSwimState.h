#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishSwimState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishSwimState__Class** type_info;
        inline app::FishSwimState__Class* get_class() {
            return il2cpp::get_class<app::FishSwimState__Class>(type_info, "", "FishSwimState");
        }
        inline app::FishSwimState* create() {
            return il2cpp::create_object<app::FishSwimState>(get_class());
        }
    } // namespace FishSwimState
} // namespace app::classes::types
