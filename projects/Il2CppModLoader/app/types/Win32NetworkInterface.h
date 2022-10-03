#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Win32NetworkInterface {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Win32NetworkInterface__Class** type_info;
        inline app::Win32NetworkInterface__Class* get_class() {
            return il2cpp::get_class<app::Win32NetworkInterface__Class>(type_info, "System.Net.NetworkInformation", "Win32NetworkInterface");
        }
        inline app::Win32NetworkInterface* create() {
            return il2cpp::create_object<app::Win32NetworkInterface>(get_class());
        }
    } // namespace Win32NetworkInterface
} // namespace app::classes::types
