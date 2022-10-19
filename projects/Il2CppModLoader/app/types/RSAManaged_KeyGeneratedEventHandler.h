#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSAManaged_KeyGeneratedEventHandler {
        inline app::RSAManaged_KeyGeneratedEventHandler__Class** type_info = (app::RSAManaged_KeyGeneratedEventHandler__Class**)(modloader::win::memory::resolve_rva(0x04709ED0));
        inline app::RSAManaged_KeyGeneratedEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::RSAManaged_KeyGeneratedEventHandler__Class>(type_info, "Mono.Security.Cryptography", "RSAManaged", "KeyGeneratedEventHandler");
        }
        inline app::RSAManaged_KeyGeneratedEventHandler* create() {
            return il2cpp::create_object<app::RSAManaged_KeyGeneratedEventHandler>(get_class());
        }
    } // namespace RSAManaged_KeyGeneratedEventHandler
} // namespace app::classes::types
