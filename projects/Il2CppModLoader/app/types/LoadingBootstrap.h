#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoadingBootstrap {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoadingBootstrap__Class** type_info;
        inline app::LoadingBootstrap__Class* get_class() {
            return il2cpp::get_class<app::LoadingBootstrap__Class>(type_info, "", "LoadingBootstrap");
        }
        inline app::LoadingBootstrap* create() {
            return il2cpp::create_object<app::LoadingBootstrap>(get_class());
        }
    } // namespace LoadingBootstrap
} // namespace app::classes::types
