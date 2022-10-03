#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoTlsProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoTlsProvider__Class** type_info;
        inline app::MonoTlsProvider__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsProvider__Class>(type_info, "Mono.Security.Interface", "MonoTlsProvider");
        }
        inline app::MonoTlsProvider* create() {
            return il2cpp::create_object<app::MonoTlsProvider>(get_class());
        }
        inline app::MonoTlsProvider__Array* create_array(int size) {
            return il2cpp::array_new<app::MonoTlsProvider__Array>(get_class(), size);
        }
    } // namespace MonoTlsProvider
} // namespace app::classes::types
