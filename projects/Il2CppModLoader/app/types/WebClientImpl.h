#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebClientImpl {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebClientImpl__Class** type_info;
        inline app::WebClientImpl__Class* get_class() {
            return il2cpp::get_class<app::WebClientImpl__Class>(type_info, "Moon.Network.Web", "WebClientImpl");
        }
        inline app::WebClientImpl* create() {
            return il2cpp::create_object<app::WebClientImpl>(get_class());
        }
    } // namespace WebClientImpl
} // namespace app::classes::types
