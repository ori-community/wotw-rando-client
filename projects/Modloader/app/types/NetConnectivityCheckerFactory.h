#pragma once
#include <Modloader/app/structs/NetConnectivityCheckerFactory.h>
#include <Modloader/app/structs/NetConnectivityCheckerFactory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NetConnectivityCheckerFactory {
        inline app::NetConnectivityCheckerFactory__Class** type_info() {
            static app::NetConnectivityCheckerFactory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NetConnectivityCheckerFactory__Class**)(modloader::win::memory::resolve_rva(0x04788D08));
            }
            return cache;
        }
        inline app::NetConnectivityCheckerFactory__Class* get_class() {
            return il2cpp::get_class<app::NetConnectivityCheckerFactory__Class>(type_info(), "SystemIntegration", "NetConnectivityCheckerFactory");
        }
        inline app::NetConnectivityCheckerFactory* create() {
            return il2cpp::create_object<app::NetConnectivityCheckerFactory>(get_class());
        }
    } // namespace NetConnectivityCheckerFactory
} // namespace app::classes::types
