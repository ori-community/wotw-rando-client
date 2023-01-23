#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CFNetwork_GetProxyData__Array__Class.h>
#include <Modloader/app/structs/CFNetwork_GetProxyData__Array.h>

namespace app::classes::types {
    namespace CFNetwork_GetProxyData__Array {
        namespace {
            inline app::CFNetwork_GetProxyData__Array__Class* type_info_ref = nullptr;
        }
        inline app::CFNetwork_GetProxyData__Array__Class** type_info = &type_info_ref;
        inline app::CFNetwork_GetProxyData__Array__Class* get_class() {
            return il2cpp::get_class<app::CFNetwork_GetProxyData__Array__Class>(type_info, "Mono.Net", "CFNetwork+GetProxyData[]");
        }
        inline app::CFNetwork_GetProxyData__Array* create() {
            return il2cpp::create_object<app::CFNetwork_GetProxyData__Array>(get_class());
        }
    } // namespace CFNetwork_GetProxyData__Array
} // namespace app::classes::types
