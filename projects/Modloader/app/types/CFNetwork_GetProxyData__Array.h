#pragma once
#include <Modloader/app/structs/CFNetwork_GetProxyData__Array.h>
#include <Modloader/app/structs/CFNetwork_GetProxyData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFNetwork_GetProxyData__Array {
        inline app::CFNetwork_GetProxyData__Array__Class** type_info() {
            static app::CFNetwork_GetProxyData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CFNetwork_GetProxyData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CFNetwork_GetProxyData__Array__Class* get_class() {
            return il2cpp::get_class<app::CFNetwork_GetProxyData__Array__Class>(type_info(), "Mono.Net", "CFNetwork+GetProxyData[]");
        }
        inline app::CFNetwork_GetProxyData__Array* create() {
            return il2cpp::create_object<app::CFNetwork_GetProxyData__Array>(get_class());
        }
    } // namespace CFNetwork_GetProxyData__Array
} // namespace app::classes::types
