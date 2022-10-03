#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebConnectionData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebConnectionData__Class** type_info;
        inline app::WebConnectionData__Class* get_class() {
            return il2cpp::get_class<app::WebConnectionData__Class>(type_info, "System.Net", "WebConnectionData");
        }
        inline app::WebConnectionData* create() {
            return il2cpp::create_object<app::WebConnectionData>(get_class());
        }
    } // namespace WebConnectionData
} // namespace app::classes::types
