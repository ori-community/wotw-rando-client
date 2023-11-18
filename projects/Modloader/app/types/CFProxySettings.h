#pragma once
#include <Modloader/app/structs/CFProxySettings.h>
#include <Modloader/app/structs/CFProxySettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFProxySettings {
        inline app::CFProxySettings__Class** type_info() {
            static app::CFProxySettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CFProxySettings__Class**)(modloader::win::memory::resolve_rva(0x047746F8));
            }
            return cache;
        }
        inline app::CFProxySettings__Class* get_class() {
            return il2cpp::get_class<app::CFProxySettings__Class>(type_info(), "Mono.Net", "CFProxySettings");
        }
        inline app::CFProxySettings* create() {
            return il2cpp::create_object<app::CFProxySettings>(get_class());
        }
    } // namespace CFProxySettings
} // namespace app::classes::types
