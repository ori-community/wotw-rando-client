#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NetConnectivityCheckerFactory {
        inline app::NetConnectivityCheckerFactory__Class** type_info = (app::NetConnectivityCheckerFactory__Class**)(modloader::win::memory::resolve_rva(0x04788D08));
        inline app::NetConnectivityCheckerFactory__Class* get_class() {
            return il2cpp::get_class<app::NetConnectivityCheckerFactory__Class>(type_info, "SystemIntegration", "NetConnectivityCheckerFactory");
        }
        inline app::NetConnectivityCheckerFactory* create() {
            return il2cpp::create_object<app::NetConnectivityCheckerFactory>(get_class());
        }
    } // namespace NetConnectivityCheckerFactory
} // namespace app::classes::types
