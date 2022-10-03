#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SecurityParameters {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SecurityParameters__Class** type_info;
        inline app::SecurityParameters__Class* get_class() {
            return il2cpp::get_class<app::SecurityParameters__Class>(type_info, "Mono.Security.Protocol.Tls", "SecurityParameters");
        }
        inline app::SecurityParameters* create() {
            return il2cpp::create_object<app::SecurityParameters>(get_class());
        }
    } // namespace SecurityParameters
} // namespace app::classes::types
