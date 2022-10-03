#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadingBootstrap_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadingBootstrap_c__Class** type_info;
        inline app::LoadingBootstrap_c__Class* get_class() {
            return il2cpp::get_nested_class<app::LoadingBootstrap_c__Class>(type_info, "", "LoadingBootstrap", "<>c");
        }
        inline app::LoadingBootstrap_c* create() {
            return il2cpp::create_object<app::LoadingBootstrap_c>(get_class());
        }
    } // namespace LoadingBootstrap_c
} // namespace app::classes::types
