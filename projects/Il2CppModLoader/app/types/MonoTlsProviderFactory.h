#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoTlsProviderFactory {
        inline app::MonoTlsProviderFactory__Class** type_info = (app::MonoTlsProviderFactory__Class**)(modloader::win::memory::resolve_rva(0x04724FF8));
        inline app::MonoTlsProviderFactory__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsProviderFactory__Class>(type_info, "Mono.Net.Security", "MonoTlsProviderFactory");
        }
        inline app::MonoTlsProviderFactory* create() {
            return il2cpp::create_object<app::MonoTlsProviderFactory>(get_class());
        }
    } // namespace MonoTlsProviderFactory
} // namespace app::classes::types
