#pragma once
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCPROW.h>
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCPROW__Array.h>
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCPROW__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Win32IPGlobalProperties_Win32_MIB_TCPROW {
        inline app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Class** type_info() {
            static app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Class**)(modloader::win::memory::resolve_rva(0x047723B8));
            }
            return cache;
        }
        inline app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Class* get_class() {
            return il2cpp::get_nested_class<app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Class>(type_info(), "System.Net.NetworkInformation", "Win32IPGlobalProperties", "Win32_MIB_TCPROW");
        }
        inline app::Win32IPGlobalProperties_Win32_MIB_TCPROW* create() {
            return il2cpp::create_object<app::Win32IPGlobalProperties_Win32_MIB_TCPROW>(get_class());
        }
        inline app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array* create_array(int size) {
            return il2cpp::array_new<app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array>(get_class(), size);
        }
        inline app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array* create_array(const std::vector<app::Win32IPGlobalProperties_Win32_MIB_TCPROW*>& items) {
            return il2cpp::array_new<app::Win32IPGlobalProperties_Win32_MIB_TCPROW__Array>(get_class(), items);
        }
    } // namespace Win32IPGlobalProperties_Win32_MIB_TCPROW
} // namespace app::classes::types
