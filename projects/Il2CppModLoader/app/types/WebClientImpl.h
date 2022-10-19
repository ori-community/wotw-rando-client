#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WebClientImpl {
        inline app::WebClientImpl__Class** type_info = (app::WebClientImpl__Class**)(modloader::win::memory::resolve_rva(0x04782BB8));
        inline app::WebClientImpl__Class* get_class() {
            return il2cpp::get_class<app::WebClientImpl__Class>(type_info, "Moon.Network.Web", "WebClientImpl");
        }
        inline app::WebClientImpl* create() {
            return il2cpp::create_object<app::WebClientImpl>(get_class());
        }
    } // namespace WebClientImpl
} // namespace app::classes::types
