#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AuthenticationLevel__Enum {
        namespace {
            inline app::AuthenticationLevel__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AuthenticationLevel__Enum__Class** type_info = &type_info_ref;
        inline app::AuthenticationLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationLevel__Enum__Class>(type_info, "System.Net.Security", "AuthenticationLevel");
        }
        inline app::AuthenticationLevel__Enum* create() {
            return il2cpp::create_object<app::AuthenticationLevel__Enum>(get_class());
        }
    } // namespace AuthenticationLevel__Enum
} // namespace app::classes::types
