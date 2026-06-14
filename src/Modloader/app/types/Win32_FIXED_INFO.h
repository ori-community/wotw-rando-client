#pragma once
#include <Modloader/app/structs/Win32_FIXED_INFO.h>
#include <Modloader/app/structs/Win32_FIXED_INFO__Boxed.h>
#include <Modloader/app/structs/Win32_FIXED_INFO__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Win32_FIXED_INFO {
        inline app::Win32_FIXED_INFO__Class** type_info() {
            static app::Win32_FIXED_INFO__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Win32_FIXED_INFO__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Win32_FIXED_INFO__Class* get_class() {
            return il2cpp::get_class<app::Win32_FIXED_INFO__Class>(type_info(), "System.Net.NetworkInformation", "Win32_FIXED_INFO");
        }
        inline app::Win32_FIXED_INFO* create() {
            return il2cpp::create_object<app::Win32_FIXED_INFO>(get_class());
        }
        inline app::Win32_FIXED_INFO__Boxed* box(app::Win32_FIXED_INFO value) {
            return il2cpp::box_value<app::Win32_FIXED_INFO__Boxed>(get_class(), value);
        }
    } // namespace Win32_FIXED_INFO
} // namespace app::classes::types
