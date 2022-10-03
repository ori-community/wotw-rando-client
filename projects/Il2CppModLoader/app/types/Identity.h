#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Identity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Identity__Class** type_info;
        inline app::Identity__Class* get_class() {
            return il2cpp::get_class<app::Identity__Class>(type_info, "System.Runtime.Remoting", "Identity");
        }
        inline app::Identity* create() {
            return il2cpp::create_object<app::Identity>(get_class());
        }
    } // namespace Identity
} // namespace app::classes::types
