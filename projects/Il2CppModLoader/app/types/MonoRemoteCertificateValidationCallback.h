#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoRemoteCertificateValidationCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoRemoteCertificateValidationCallback__Class** type_info;
        inline app::MonoRemoteCertificateValidationCallback__Class* get_class() {
            return il2cpp::get_class<app::MonoRemoteCertificateValidationCallback__Class>(type_info, "Mono.Security.Interface", "MonoRemoteCertificateValidationCallback");
        }
        inline app::MonoRemoteCertificateValidationCallback* create() {
            return il2cpp::create_object<app::MonoRemoteCertificateValidationCallback>(get_class());
        }
    } // namespace MonoRemoteCertificateValidationCallback
} // namespace app::classes::types
