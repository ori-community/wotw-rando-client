#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemoteCertificateValidationCallback {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemoteCertificateValidationCallback__Class** type_info;
        inline app::RemoteCertificateValidationCallback__Class* get_class() {
            return il2cpp::get_class<app::RemoteCertificateValidationCallback__Class>(type_info, "System.Net.Security", "RemoteCertificateValidationCallback");
        }
        inline app::RemoteCertificateValidationCallback* create() {
            return il2cpp::create_object<app::RemoteCertificateValidationCallback>(get_class());
        }
    } // namespace RemoteCertificateValidationCallback
} // namespace app::classes::types
