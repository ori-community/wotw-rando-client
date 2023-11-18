#pragma once
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCP6ROW.h>
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Array.h>
#include <Modloader/app/structs/Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Win32IPGlobalProperties_Win32_MIB_TCP6ROW {
        inline app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Class** type_info() {
            static app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Class**)(modloader::win::memory::resolve_rva(0x04716B10));
            }
            return cache;
        }
        inline app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Class* get_class() {
            return il2cpp::get_nested_class<app::Win32IPGlobalProperties_Win32_MIB_TCP6ROW__Class>(type_info(), "System.Net.NetworkInformation", "Win32IPGlobalProperties", "Win32_MIB_TCP6ROW");
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
