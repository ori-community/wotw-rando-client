#pragma once
#include <Modloader/app/structs/Alert.h>
#include <Modloader/app/structs/Alert__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Alert {
        inline app::Alert__Class** type_info() {
            static app::Alert__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Alert__Class**)(modloader::win::memory::resolve_rva(0x0475CCF8));
            }
            return cache;
        }
        inline app::Alert__Class* get_class() {
            return il2cpp::get_class<app::Alert__Class>(type_info(), "Mono.Security.Protocol.Tls", "Alert");
        }
        inline app::Alert* create() {
            return il2cpp::create_object<app::Alert>(get_class());
        }
    } // namespace Alert
} // namespace app::classes::types
