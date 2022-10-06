#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Win32IPGlobalProperties_Win32_MIB_TCP6ROW {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Class** type_info;
        inline app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Class* get_class() {
            return il2cpp::get_nested_class<app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Class>(type_info, "System.Net.NetworkInformation", "Win32IPGlobalProperties", "Win32_MIB_TCP6ROW");
        }
        inline app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW* create() {
            return il2cpp::create_object<app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW>(get_class());
        }
        inline app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array* create_array(int size) {
            return il2cpp::array_new<app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array>(get_class(), size);
        }
        inline app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array* create_array(const std::vector<app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW*>& items) {
            return il2cpp::array_new<app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array>(get_class(), items);
        }
    } // namespace Win32IPGlobalProperties_Win32_MIB_TCP6ROW
} // namespace app::classes::types
