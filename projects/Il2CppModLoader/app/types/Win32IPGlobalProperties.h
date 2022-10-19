#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Win32IPGlobalProperties {
        inline app::Win32IPGlobalProperties__Class** type_info = (app::Win32IPGlobalProperties__Class**)(modloader::win::memory::resolve_rva(0x04730840));
        inline app::Win32IPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::Win32IPGlobalProperties__Class>(type_info, "System.Net.NetworkInformation", "Win32IPGlobalProperties");
        }
        inline app::Win32IPGlobalProperties* create() {
            return il2cpp::create_object<app::Win32IPGlobalProperties>(get_class());
        }
    } // namespace Win32IPGlobalProperties
} // namespace app::classes::types
