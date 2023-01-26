#pragma once
#include <Modloader/app/structs/ExtendedProtectionPolicyTypeConverter.h>
#include <Modloader/app/structs/ExtendedProtectionPolicyTypeConverter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtendedProtectionPolicyTypeConverter {
        inline app::ExtendedProtectionPolicyTypeConverter__Class** type_info() {
            static app::ExtendedProtectionPolicyTypeConverter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExtendedProtectionPolicyTypeConverter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExtendedProtectionPolicyTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::ExtendedProtectionPolicyTypeConverter__Class>(type_info(), "System.Security.Authentication.ExtendedProtection", "ExtendedProtectionPolicyTypeConverter");
        }
        inline app::ExtendedProtectionPolicyTypeConverter* create() {
            return il2cpp::create_object<app::ExtendedProtectionPolicyTypeConverter>(get_class());
        }
    } // namespace ExtendedProtectionPolicyTypeConverter
} // namespace app::classes::types
