#pragma once
#include <Modloader/app/structs/AuthenticationLevel__Enum.h>
#include <Modloader/app/structs/AuthenticationLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthenticationLevel__Enum {
        inline app::AuthenticationLevel__Enum__Class** type_info() {
            static app::AuthenticationLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AuthenticationLevel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AuthenticationLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationLevel__Enum__Class>(type_info(), "System.Net.Security", "AuthenticationLevel");
        }
        inline app::AuthenticationLevel__Enum* create() {
            return il2cpp::create_object<app::AuthenticationLevel__Enum>(get_class());
        }
    } // namespace AuthenticationLevel__Enum
} // namespace app::classes::types
