#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Alert {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Alert__Class** type_info;
        inline app::Alert__Class* get_class() {
            return il2cpp::get_class<app::Alert__Class>(type_info, "Mono.Security.Protocol.Tls", "Alert");
        }
        inline app::Alert* create() {
            return il2cpp::create_object<app::Alert>(get_class());
        }
    } // namespace Alert
} // namespace app::classes::types
