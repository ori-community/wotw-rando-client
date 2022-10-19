#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SingletonIdentity {
        inline app::SingletonIdentity__Class** type_info = (app::SingletonIdentity__Class**)(modloader::win::memory::resolve_rva(0x047695A8));
        inline app::SingletonIdentity__Class* get_class() {
            return il2cpp::get_class<app::SingletonIdentity__Class>(type_info, "System.Runtime.Remoting", "SingletonIdentity");
        }
        inline app::SingletonIdentity* create() {
            return il2cpp::create_object<app::SingletonIdentity>(get_class());
        }
    } // namespace SingletonIdentity
} // namespace app::classes::types
