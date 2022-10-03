#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebProxyData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebProxyData__Class** type_info;
        inline app::WebProxyData__Class* get_class() {
            return il2cpp::get_class<app::WebProxyData__Class>(type_info, "System.Net", "WebProxyData");
        }
        inline app::WebProxyData* create() {
            return il2cpp::create_object<app::WebProxyData>(get_class());
        }
    } // namespace WebProxyData
} // namespace app::classes::types
