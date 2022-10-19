#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoTlsSettings {
        inline app::MonoTlsSettings__Class** type_info = (app::MonoTlsSettings__Class**)(modloader::win::memory::resolve_rva(0x0477F5E0));
        inline app::MonoTlsSettings__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsSettings__Class>(type_info, "Mono.Security.Interface", "MonoTlsSettings");
        }
        inline app::MonoTlsSettings* create() {
            return il2cpp::create_object<app::MonoTlsSettings>(get_class());
        }
    } // namespace MonoTlsSettings
} // namespace app::classes::types
