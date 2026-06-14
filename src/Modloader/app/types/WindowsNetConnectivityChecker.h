#pragma once
#include <Modloader/app/structs/WindowsNetConnectivityChecker.h>
#include <Modloader/app/structs/WindowsNetConnectivityChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WindowsNetConnectivityChecker {
        inline app::WindowsNetConnectivityChecker__Class** type_info() {
            static app::WindowsNetConnectivityChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WindowsNetConnectivityChecker__Class**)(modloader::win::memory::resolve_rva(0x04794968));
            }
            return cache;
        }
        inline app::WindowsNetConnectivityChecker__Class* get_class() {
            return il2cpp::get_class<app::WindowsNetConnectivityChecker__Class>(type_info(), "SystemIntegration", "WindowsNetConnectivityChecker");
        }
        inline app::WindowsNetConnectivityChecker* create() {
            return il2cpp::create_object<app::WindowsNetConnectivityChecker>(get_class());
        }
    } // namespace WindowsNetConnectivityChecker
} // namespace app::classes::types
