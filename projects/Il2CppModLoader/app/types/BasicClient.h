#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BasicClient {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BasicClient__Class** type_info;
        inline app::BasicClient__Class* get_class() {
            return il2cpp::get_class<app::BasicClient__Class>(type_info, "System.Net", "BasicClient");
        }
        inline app::BasicClient* create() {
            return il2cpp::create_object<app::BasicClient>(get_class());
        }
    } // namespace BasicClient
} // namespace app::classes::types
