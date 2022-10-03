#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DSAManaged_KeyGeneratedEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DSAManaged_KeyGeneratedEventHandler__Class** type_info;
        inline app::DSAManaged_KeyGeneratedEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::DSAManaged_KeyGeneratedEventHandler__Class>(type_info, "Mono.Security.Cryptography", "DSAManaged", "KeyGeneratedEventHandler");
        }
        inline app::DSAManaged_KeyGeneratedEventHandler* create() {
            return il2cpp::create_object<app::DSAManaged_KeyGeneratedEventHandler>(get_class());
        }
    } // namespace DSAManaged_KeyGeneratedEventHandler
} // namespace app::classes::types
