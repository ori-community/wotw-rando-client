#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509SubjectKeyIdentifierExtension {
        inline app::X509SubjectKeyIdentifierExtension__Class** type_info = (app::X509SubjectKeyIdentifierExtension__Class**)(modloader::win::memory::resolve_rva(0x047312D0));
        inline app::X509SubjectKeyIdentifierExtension__Class* get_class() {
            return il2cpp::get_class<app::X509SubjectKeyIdentifierExtension__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension");
        }
        inline app::X509SubjectKeyIdentifierExtension* create() {
            return il2cpp::create_object<app::X509SubjectKeyIdentifierExtension>(get_class());
        }
    } // namespace X509SubjectKeyIdentifierExtension
} // namespace app::classes::types
