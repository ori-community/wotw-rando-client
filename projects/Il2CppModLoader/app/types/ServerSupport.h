#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerSupport {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerSupport__Class** type_info;
        inline app::ServerSupport__Class* get_class() {
            return il2cpp::get_class<app::ServerSupport__Class>(type_info, "", "ServerSupport");
        }
        inline app::ServerSupport* create() {
            return il2cpp::create_object<app::ServerSupport>(get_class());
        }
    } // namespace ServerSupport
} // namespace app::classes::types
