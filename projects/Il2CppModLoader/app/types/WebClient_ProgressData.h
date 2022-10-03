#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebClient_ProgressData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebClient_ProgressData__Class** type_info;
        inline app::WebClient_ProgressData__Class* get_class() {
            return il2cpp::get_nested_class<app::WebClient_ProgressData__Class>(type_info, "System.Net", "WebClient", "ProgressData");
        }
        inline app::WebClient_ProgressData* create() {
            return il2cpp::create_object<app::WebClient_ProgressData>(get_class());
        }
    } // namespace WebClient_ProgressData
} // namespace app::classes::types
