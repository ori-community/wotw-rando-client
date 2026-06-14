#pragma once
#include <Modloader/app/structs/IPProtectionLevel__Enum.h>
#include <Modloader/app/structs/IPProtectionLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPProtectionLevel__Enum {
        inline app::IPProtectionLevel__Enum__Class** type_info() {
            static app::IPProtectionLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPProtectionLevel__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPProtectionLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::IPProtectionLevel__Enum__Class>(type_info(), "System.Net.Sockets", "IPProtectionLevel");
        }
        inline app::IPProtectionLevel__Enum* create() {
            return il2cpp::create_object<app::IPProtectionLevel__Enum>(get_class());
        }
    } // namespace IPProtectionLevel__Enum
} // namespace app::classes::types
