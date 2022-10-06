#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CFNetwork_GetProxyData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CFNetwork_GetProxyData__Class** type_info;
        inline app::CFNetwork_GetProxyData__Class* get_class() {
            return il2cpp::get_nested_class<app::CFNetwork_GetProxyData__Class>(type_info, "Mono.Net", "CFNetwork", "GetProxyData");
        }
        inline app::CFNetwork_GetProxyData* create() {
            return il2cpp::create_object<app::CFNetwork_GetProxyData>(get_class());
        }
        inline app::CFNetwork_GetProxyData__Array* create_array(int size) {
            return il2cpp::array_new<app::CFNetwork_GetProxyData__Array>(get_class(), size);
        }
        inline app::CFNetwork_GetProxyData__Array* create_array(const std::vector<app::CFNetwork_GetProxyData*>& items) {
            return il2cpp::array_new<app::CFNetwork_GetProxyData__Array>(get_class(), items);
        }
    } // namespace CFNetwork_GetProxyData
} // namespace app::classes::types
