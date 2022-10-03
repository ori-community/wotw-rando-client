#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509SubjectKeyIdentifierHashAlgorithm__Enum {
        namespace {
            app::X509SubjectKeyIdentifierHashAlgorithm__Enum__Class* type_info_ref = nullptr;
        }
        app::X509SubjectKeyIdentifierHashAlgorithm__Enum__Class** type_info = &type_info_ref;
        inline app::X509SubjectKeyIdentifierHashAlgorithm__Enum__Class* get_class() {
            return il2cpp::get_class<app::X509SubjectKeyIdentifierHashAlgorithm__Enum__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierHashAlgorithm");
        }
        inline app::X509SubjectKeyIdentifierHashAlgorithm__Enum* create() {
            return il2cpp::create_object<app::X509SubjectKeyIdentifierHashAlgorithm__Enum>(get_class());
        }
    } // namespace X509SubjectKeyIdentifierHashAlgorithm__Enum
} // namespace app::classes::types
