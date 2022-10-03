#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplayScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReplayScreen__Class** type_info;
        inline app::ReplayScreen__Class* get_class() {
            return il2cpp::get_class<app::ReplayScreen__Class>(type_info, "", "ReplayScreen");
        }
        inline app::ReplayScreen* create() {
            return il2cpp::create_object<app::ReplayScreen>(get_class());
        }
    } // namespace ReplayScreen
} // namespace app::classes::types
