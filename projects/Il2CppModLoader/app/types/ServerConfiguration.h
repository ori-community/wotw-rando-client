#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerConfiguration {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerConfiguration__Class** type_info;
        inline app::ServerConfiguration__Class* get_class() {
            return il2cpp::get_class<app::ServerConfiguration__Class>(type_info, "", "ServerConfiguration");
        }
        inline app::ServerConfiguration* create() {
            return il2cpp::create_object<app::ServerConfiguration>(get_class());
        }
    } // namespace ServerConfiguration
} // namespace app::classes::types
