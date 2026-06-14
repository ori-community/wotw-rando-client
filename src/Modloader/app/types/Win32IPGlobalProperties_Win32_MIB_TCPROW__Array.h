#pragma once
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCPROW__Array.h>
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCPROW__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Win32IPGlobalProperties_Win32_MIB_TCPROW__Array {
        inline app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array__Class** type_info() {
            static app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array__Class* get_class() {
            return il2cpp::get_class<app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array__Class>(type_info(), "System.Net.NetworkInformation", "Win32IPGlobalProperties+Win32_MIB_TCPROW[]");
        }
        inline app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array* create() {
            return il2cpp::create_object<app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array>(get_class());
        }
    } // namespace Win32IPGlobalProperties_Win32_MIB_TCPROW__Array
} // namespace app::classes::types
