#pragma once
#include <Modloader/app/structs/PolicyEnforcement__Enum.h>
#include <Modloader/app/structs/PolicyEnforcement__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PolicyEnforcement__Enum {
        inline app::PolicyEnforcement__Enum__Class** type_info() {
            static app::PolicyEnforcement__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PolicyEnforcement__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PolicyEnforcement__Enum__Class* get_class() {
            return il2cpp::get_class<app::PolicyEnforcement__Enum__Class>(type_info(), "System.Security.Authentication.ExtendedProtection", "PolicyEnforcement");
        }
        inline app::PolicyEnforcement__Enum* create() {
            return il2cpp::create_object<app::PolicyEnforcement__Enum>(get_class());
        }
    } // namespace PolicyEnforcement__Enum
} // namespace app::classes::types
