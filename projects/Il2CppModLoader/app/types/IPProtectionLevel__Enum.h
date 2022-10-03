#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPProtectionLevel__Enum {
        namespace {
            app::IPProtectionLevel__Enum__Class* type_info_ref = nullptr;
        }
        app::IPProtectionLevel__Enum__Class** type_info = &type_info_ref;
        inline app::IPProtectionLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::IPProtectionLevel__Enum__Class>(type_info, "System.Net.Sockets", "IPProtectionLevel");
        }
        inline app::IPProtectionLevel__Enum* create() {
            return il2cpp::create_object<app::IPProtectionLevel__Enum>(get_class());
        }
    } // namespace IPProtectionLevel__Enum
} // namespace app::classes::types
