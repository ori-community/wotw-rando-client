#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CspKeyContainerInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CspKeyContainerInfo__Class** type_info;
        inline app::CspKeyContainerInfo__Class* get_class() {
            return il2cpp::get_class<app::CspKeyContainerInfo__Class>(type_info, "System.Security.Cryptography", "CspKeyContainerInfo");
        }
        inline app::CspKeyContainerInfo* create() {
            return il2cpp::create_object<app::CspKeyContainerInfo>(get_class());
        }
    } // namespace CspKeyContainerInfo
} // namespace app::classes::types
