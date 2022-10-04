#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICertificateValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICertificateValidator__Class** type_info;
        inline app::ICertificateValidator__Class* get_class() {
            return il2cpp::get_class<app::ICertificateValidator__Class>(type_info, "Mono.Security.Interface", "ICertificateValidator");
        }
        inline app::ICertificateValidator* create() {
            return il2cpp::create_object<app::ICertificateValidator>(get_class());
        }
    } // namespace ICertificateValidator
} // namespace app::classes::types
