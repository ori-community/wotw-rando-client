#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FishFlopState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FishFlopState__Class** type_info;
        inline app::FishFlopState__Class* get_class() {
            return il2cpp::get_class<app::FishFlopState__Class>(type_info, "", "FishFlopState");
        }
        inline app::FishFlopState* create() {
            return il2cpp::create_object<app::FishFlopState>(get_class());
        }
    } // namespace FishFlopState
} // namespace app::classes::types
