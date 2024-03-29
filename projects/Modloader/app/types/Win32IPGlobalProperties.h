#pragma once
#include <Modloader/app/structs/Win32IPGlobalProperties.h>
#include <Modloader/app/structs/Win32IPGlobalProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Win32IPGlobalProperties {
        inline app::Win32IPGlobalProperties__Class** type_info() {
            static app::Win32IPGlobalProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Win32IPGlobalProperties__Class**)(modloader::win::memory::resolve_rva(0x04730840));
            }
            return cache;
        }
        inline app::Win32IPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::Win32IPGlobalProperties__Class>(type_info(), "System.Net.NetworkInformation", "Win32IPGlobalProperties");
        }
        inline app::Win32IPGlobalProperties* create() {
            return il2cpp::create_object<app::Win32IPGlobalProperties>(get_class());
        }
    } // namespace Win32IPGlobalProperties
} // namespace app::classes::types
