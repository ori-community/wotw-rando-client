#pragma once
#include <Modloader/app/structs/ExtendedProtectionPolicy.h>
#include <Modloader/app/structs/ExtendedProtectionPolicy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExtendedProtectionPolicy {
        inline app::ExtendedProtectionPolicy__Class** type_info() {
            static app::ExtendedProtectionPolicy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ExtendedProtectionPolicy__Class**)(modloader::win::memory::resolve_rva(0x04728238));
            }
            return cache;
        }
        inline app::ExtendedProtectionPolicy__Class* get_class() {
            return il2cpp::get_class<app::ExtendedProtectionPolicy__Class>(type_info(), "System.Security.Authentication.ExtendedProtection", "ExtendedProtectionPolicy");
        }
        inline app::ExtendedProtectionPolicy* create() {
            return il2cpp::create_object<app::ExtendedProtectionPolicy>(get_class());
        }
    } // namespace ExtendedProtectionPolicy
} // namespace app::classes::types
