#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Win32_FIXED_INFO {
        namespace {
            app::Win32_FIXED_INFO__Class* type_info_ref = nullptr;
        }
        app::Win32_FIXED_INFO__Class** type_info = &type_info_ref;
        inline app::Win32_FIXED_INFO__Class* get_class() {
            return il2cpp::get_class<app::Win32_FIXED_INFO__Class>(type_info, "System.Net.NetworkInformation", "Win32_FIXED_INFO");
        }
        inline app::Win32_FIXED_INFO* create() {
            return il2cpp::create_object<app::Win32_FIXED_INFO>(get_class());
        }
        inline app::Win32_FIXED_INFO__Boxed* box(app::Win32_FIXED_INFO value) {
            return il2cpp::box_value<app::Win32_FIXED_INFO__Boxed>(get_class(), value);
        }
    } // namespace Win32_FIXED_INFO
} // namespace app::classes::types
