#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DebugHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DebugHelper__Class** type_info;
        inline app::DebugHelper__Class* get_class() {
            return il2cpp::get_class<app::DebugHelper__Class>(type_info, "Mono.Security.Protocol.Tls", "DebugHelper");
        }
        inline app::DebugHelper* create() {
            return il2cpp::create_object<app::DebugHelper>(get_class());
        }
    } // namespace DebugHelper
} // namespace app::classes::types
