#pragma once
#include <Modloader/app/structs/X509SubjectKeyIdentifierExtension.h>
#include <Modloader/app/structs/X509SubjectKeyIdentifierExtension__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509SubjectKeyIdentifierExtension {
        inline app::X509SubjectKeyIdentifierExtension__Class** type_info() {
            static app::X509SubjectKeyIdentifierExtension__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509SubjectKeyIdentifierExtension__Class**)(modloader::win::memory::resolve_rva(0x047312D0));
            }
            return cache;
        }
        inline app::X509SubjectKeyIdentifierExtension__Class* get_class() {
            return il2cpp::get_class<app::X509SubjectKeyIdentifierExtension__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension");
        }
        inline app::X509SubjectKeyIdentifierExtension* create() {
            return il2cpp::create_object<app::X509SubjectKeyIdentifierExtension>(get_class());
        }
    } // namespace X509SubjectKeyIdentifierExtension
} // namespace app::classes::types
