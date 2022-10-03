#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ConfigHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ConfigHandler__Class** type_info;
        inline app::ConfigHandler__Class* get_class() {
            return il2cpp::get_class<app::ConfigHandler__Class>(type_info, "System.Runtime.Remoting", "ConfigHandler");
        }
        inline app::ConfigHandler* create() {
            return il2cpp::create_object<app::ConfigHandler>(get_class());
        }
    } // namespace ConfigHandler
} // namespace app::classes::types
