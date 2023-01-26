#pragma once
#include <Modloader/app/structs/Win32NetworkInterface.h>
#include <Modloader/app/structs/Win32NetworkInterface__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Win32NetworkInterface {
        inline app::Win32NetworkInterface__Class** type_info() {
            static app::Win32NetworkInterface__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Win32NetworkInterface__Class**)(modloader::win::memory::resolve_rva(0x047370A0));
            }
            return cache;
        }
        inline app::Win32NetworkInterface__Class* get_class() {
            return il2cpp::get_class<app::Win32NetworkInterface__Class>(type_info(), "System.Net.NetworkInformation", "Win32NetworkInterface");
        }
        inline app::Win32NetworkInterface* create() {
            return il2cpp::create_object<app::Win32NetworkInterface>(get_class());
        }
    } // namespace Win32NetworkInterface
} // namespace app::classes::types
