#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishBashedState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishBashedState__Class** type_info;
        inline app::FishBashedState__Class* get_class() {
            return il2cpp::get_class<app::FishBashedState__Class>(type_info, "", "FishBashedState");
        }
        inline app::FishBashedState* create() {
            return il2cpp::create_object<app::FishBashedState>(get_class());
        }
    } // namespace FishBashedState
} // namespace app::classes::types
