#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExtendedProtectionPolicy {
        inline app::ExtendedProtectionPolicy__Class** type_info = (app::ExtendedProtectionPolicy__Class**)(modloader::win::memory::resolve_rva(0x04728238));
        inline app::ExtendedProtectionPolicy__Class* get_class() {
            return il2cpp::get_class<app::ExtendedProtectionPolicy__Class>(type_info, "System.Security.Authentication.ExtendedProtection", "ExtendedProtectionPolicy");
        }
        inline app::ExtendedProtectionPolicy* create() {
            return il2cpp::create_object<app::ExtendedProtectionPolicy>(get_class());
        }
    } // namespace ExtendedProtectionPolicy
} // namespace app::classes::types
