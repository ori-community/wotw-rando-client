#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StartupState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::StartupState__Class** type_info;
        inline app::StartupState__Class* get_class() {
            return il2cpp::get_class<app::StartupState__Class>(type_info, "", "StartupState");
        }
        inline app::StartupState* create() {
            return il2cpp::create_object<app::StartupState>(get_class());
        }
    } // namespace StartupState
} // namespace app::classes::types
