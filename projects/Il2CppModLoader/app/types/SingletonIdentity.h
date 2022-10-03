#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SingletonIdentity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SingletonIdentity__Class** type_info;
        inline app::SingletonIdentity__Class* get_class() {
            return il2cpp::get_class<app::SingletonIdentity__Class>(type_info, "System.Runtime.Remoting", "SingletonIdentity");
        }
        inline app::SingletonIdentity* create() {
            return il2cpp::create_object<app::SingletonIdentity>(get_class());
        }
    } // namespace SingletonIdentity
} // namespace app::classes::types
