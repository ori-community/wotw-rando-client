#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SslProtocols__Enum {
        inline app::SslProtocols__Enum__Class** type_info = (app::SslProtocols__Enum__Class**)(modloader::win::memory::resolve_rva(0x04750418));
        inline app::SslProtocols__Enum__Class* get_class() {
            return il2cpp::get_class<app::SslProtocols__Enum__Class>(type_info, "System.Security.Authentication", "SslProtocols");
        }
        inline app::SslProtocols__Enum* create() {
            return il2cpp::create_object<app::SslProtocols__Enum>(get_class());
        }
    } // namespace SslProtocols__Enum
} // namespace app::classes::types
