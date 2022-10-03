#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SingleCallIdentity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SingleCallIdentity__Class** type_info;
        inline app::SingleCallIdentity__Class* get_class() {
            return il2cpp::get_class<app::SingleCallIdentity__Class>(type_info, "System.Runtime.Remoting", "SingleCallIdentity");
        }
        inline app::SingleCallIdentity* create() {
            return il2cpp::create_object<app::SingleCallIdentity>(get_class());
        }
    } // namespace SingleCallIdentity
} // namespace app::classes::types
