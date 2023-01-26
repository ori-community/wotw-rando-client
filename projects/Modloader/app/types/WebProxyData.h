#pragma once
#include <Modloader/app/structs/WebProxyData.h>
#include <Modloader/app/structs/WebProxyData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebProxyData {
        inline app::WebProxyData__Class** type_info() {
            static app::WebProxyData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebProxyData__Class**)(modloader::win::memory::resolve_rva(0x04708DB8));
            }
            return cache;
        }
        inline app::WebProxyData__Class* get_class() {
            return il2cpp::get_class<app::WebProxyData__Class>(type_info(), "System.Net", "WebProxyData");
        }
        inline app::WebProxyData* create() {
            return il2cpp::create_object<app::WebProxyData>(get_class());
        }
    } // namespace WebProxyData
} // namespace app::classes::types
