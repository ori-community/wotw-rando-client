#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ISecurityEncodable {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ISecurityEncodable__Class** type_info;
        inline app::ISecurityEncodable__Class* get_class() {
            return il2cpp::get_class<app::ISecurityEncodable__Class>(type_info, "System.Security", "ISecurityEncodable");
        }
        inline app::ISecurityEncodable* create() {
            return il2cpp::create_object<app::ISecurityEncodable>(get_class());
        }
    } // namespace ISecurityEncodable
} // namespace app::classes::types
