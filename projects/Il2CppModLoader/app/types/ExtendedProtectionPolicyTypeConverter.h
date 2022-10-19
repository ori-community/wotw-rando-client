#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExtendedProtectionPolicyTypeConverter {
        namespace {
            inline app::ExtendedProtectionPolicyTypeConverter__Class* type_info_ref = nullptr;
        }
        inline app::ExtendedProtectionPolicyTypeConverter__Class** type_info = &type_info_ref;
        inline app::ExtendedProtectionPolicyTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::ExtendedProtectionPolicyTypeConverter__Class>(type_info, "System.Security.Authentication.ExtendedProtection", "ExtendedProtectionPolicyTypeConverter");
        }
        inline app::ExtendedProtectionPolicyTypeConverter* create() {
            return il2cpp::create_object<app::ExtendedProtectionPolicyTypeConverter>(get_class());
        }
    } // namespace ExtendedProtectionPolicyTypeConverter
} // namespace app::classes::types
