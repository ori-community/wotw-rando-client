#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Win32IPGlobalProperties_Win32_MIB_TCPROW__Array {
        namespace {
            inline app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array__Class* type_info_ref = nullptr;
        }
        inline app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array__Class** type_info = &type_info_ref;
        inline app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array__Class* get_class() {
            return il2cpp::get_class<app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array__Class>(type_info, "System.Net.NetworkInformation", "Win32IPGlobalProperties+Win32_MIB_TCPROW[]");
        }
        inline app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array* create() {
            return il2cpp::create_object<app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array>(get_class());
        }
    } // namespace Win32IPGlobalProperties_Win32_MIB_TCPROW__Array
} // namespace app::classes::types
