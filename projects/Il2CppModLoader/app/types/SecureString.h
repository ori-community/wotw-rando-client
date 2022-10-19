#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SecureString {
        inline app::SecureString__Class** type_info = (app::SecureString__Class**)(modloader::win::memory::resolve_rva(0x047726D0));
        inline app::SecureString__Class* get_class() {
            return il2cpp::get_class<app::SecureString__Class>(type_info, "System.Security", "SecureString");
        }
        inline app::SecureString* create() {
            return il2cpp::create_object<app::SecureString>(get_class());
        }
    } // namespace SecureString
} // namespace app::classes::types
