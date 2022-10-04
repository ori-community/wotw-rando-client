#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISecurityEncodable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISecurityEncodable__Class** type_info;
        inline app::ISecurityEncodable__Class* get_class() {
            return il2cpp::get_class<app::ISecurityEncodable__Class>(type_info, "System.Security", "ISecurityEncodable");
        }
    } // namespace ISecurityEncodable
} // namespace app::classes::types
