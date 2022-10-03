#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplayServer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReplayServer__Class** type_info;
        inline app::ReplayServer__Class* get_class() {
            return il2cpp::get_class<app::ReplayServer__Class>(type_info, "", "ReplayServer");
        }
        inline app::ReplayServer* create() {
            return il2cpp::create_object<app::ReplayServer>(get_class());
        }
    } // namespace ReplayServer
} // namespace app::classes::types
