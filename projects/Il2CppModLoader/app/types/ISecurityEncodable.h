#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISecurityEncodable {
        inline app::ISecurityEncodable__Class** type_info = (app::ISecurityEncodable__Class**)(modloader::win::memory::resolve_rva(0x0472C680));
        inline app::ISecurityEncodable__Class* get_class() {
            return il2cpp::get_class<app::ISecurityEncodable__Class>(type_info, "System.Security", "ISecurityEncodable");
        }
    } // namespace ISecurityEncodable
} // namespace app::classes::types
