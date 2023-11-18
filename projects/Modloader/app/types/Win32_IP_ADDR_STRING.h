#pragma once
#include <Modloader/app/structs/Win32_IP_ADDR_STRING.h>
#include <Modloader/app/structs/Win32_IP_ADDR_STRING__Boxed.h>
#include <Modloader/app/structs/Win32_IP_ADDR_STRING__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Win32_IP_ADDR_STRING {
        inline app::Win32_IP_ADDR_STRING__Class** type_info() {
            static app::Win32_IP_ADDR_STRING__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Win32_IP_ADDR_STRING__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Win32_IP_ADDR_STRING__Class* get_class() {
            return il2cpp::get_class<app::Win32_IP_ADDR_STRING__Class>(type_info(), "System.Net.NetworkInformation", "Win32_IP_ADDR_STRING");
        }
        inline app::Win32_IP_ADDR_STRING* create() {
            return il2cpp::create_object<app::Win32_IP_ADDR_STRING>(get_class());
        }
        inline app::Win32_IP_ADDR_STRING__Boxed* box(app::Win32_IP_ADDR_STRING value) {
            return il2cpp::box_value<app::Win32_IP_ADDR_STRING__Boxed>(get_class(), value);
        }
    } // namespace Win32_IP_ADDR_STRING
} // namespace app::classes::types
