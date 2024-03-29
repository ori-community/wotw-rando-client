#pragma once
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_IN6_ADDR.h>
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_IN6_ADDR__Boxed.h>
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_IN6_ADDR__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Win32IPGlobalProperties_Win32_IN6_ADDR {
        inline app::Win32IPGlobalProperties_Win32_IN6_ADDR__Class** type_info() {
            static app::Win32IPGlobalProperties_Win32_IN6_ADDR__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Win32IPGlobalProperties_Win32_IN6_ADDR__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Win32IPGlobalProperties_Win32_IN6_ADDR__Class* get_class() {
            return il2cpp::get_nested_class<app::Win32IPGlobalProperties_Win32_IN6_ADDR__Class>(type_info(), "System.Net.NetworkInformation", "Win32IPGlobalProperties", "Win32_IN6_ADDR");
        }
        inline app::Win32IPGlobalProperties_Win32_IN6_ADDR* create() {
            return il2cpp::create_object<app::Win32IPGlobalProperties_Win32_IN6_ADDR>(get_class());
        }
        inline app::Win32IPGlobalProperties_Win32_IN6_ADDR__Boxed* box(app::Win32IPGlobalProperties_Win32_IN6_ADDR value) {
            return il2cpp::box_value<app::Win32IPGlobalProperties_Win32_IN6_ADDR__Boxed>(get_class(), value);
        }
    } // namespace Win32IPGlobalProperties_Win32_IN6_ADDR
} // namespace app::classes::types
