#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICertificateValidator2 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICertificateValidator2__Class** type_info;
        inline app::ICertificateValidator2__Class* get_class() {
            return il2cpp::get_class<app::ICertificateValidator2__Class>(type_info, "Mono.Security.Interface", "ICertificateValidator2");
        }
        inline app::ICertificateValidator2* create() {
            return il2cpp::create_object<app::ICertificateValidator2>(get_class());
        }
    } // namespace ICertificateValidator2
} // namespace app::classes::types
