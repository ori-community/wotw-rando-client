#pragma once
#include <Modloader/app/structs/XboxNetConnectivityChecker.h>
#include <Modloader/app/structs/XboxNetConnectivityChecker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxNetConnectivityChecker {
        inline app::XboxNetConnectivityChecker__Class** type_info() {
            static app::XboxNetConnectivityChecker__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxNetConnectivityChecker__Class**)(modloader::win::memory::resolve_rva(0x0472AC40));
            }
            return cache;
        }
        inline app::XboxNetConnectivityChecker__Class* get_class() {
            return il2cpp::get_class<app::XboxNetConnectivityChecker__Class>(type_info(), "SystemIntegration", "XboxNetConnectivityChecker");
        }
        inline app::XboxNetConnectivityChecker* create() {
            return il2cpp::create_object<app::XboxNetConnectivityChecker>(get_class());
        }
    } // namespace XboxNetConnectivityChecker
} // namespace app::classes::types
