#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CFProxySettings {
        inline app::CFProxySettings__Class** type_info = (app::CFProxySettings__Class**)(modloader::win::memory::resolve_rva(0x047746F8));
        inline app::CFProxySettings__Class* get_class() {
            return il2cpp::get_class<app::CFProxySettings__Class>(type_info, "Mono.Net", "CFProxySettings");
        }
        inline app::CFProxySettings* create() {
            return il2cpp::create_object<app::CFProxySettings>(get_class());
        }
    } // namespace CFProxySettings
} // namespace app::classes::types
