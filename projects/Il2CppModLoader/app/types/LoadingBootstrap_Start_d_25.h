#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadingBootstrap_Start_d_25 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadingBootstrap_Start_d_25__Class** type_info;
        inline app::LoadingBootstrap_Start_d_25__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadingBootstrap_Start_d_25__Class>(type_info, "", "LoadingBootstrap", "<Start>d__25");
        }
        inline app::LoadingBootstrap_Start_d_25* create() {
            return il2cpp::create_object<app::LoadingBootstrap_Start_d_25>(get_class());
        }
    } // namespace LoadingBootstrap_Start_d_25
} // namespace app::classes::types
