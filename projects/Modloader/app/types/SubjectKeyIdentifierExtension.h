#pragma once
#include <Modloader/app/structs/SubjectKeyIdentifierExtension.h>
#include <Modloader/app/structs/SubjectKeyIdentifierExtension__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SubjectKeyIdentifierExtension {
        inline app::SubjectKeyIdentifierExtension__Class** type_info() {
            static app::SubjectKeyIdentifierExtension__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SubjectKeyIdentifierExtension__Class**)(modloader::win::memory::resolve_rva(0x04738360));
            }
            return cache;
        }
        inline app::SubjectKeyIdentifierExtension__Class* get_class() {
            return il2cpp::get_class<app::SubjectKeyIdentifierExtension__Class>(type_info(), "Mono.Security.X509.Extensions", "SubjectKeyIdentifierExtension");
        }
        inline app::SubjectKeyIdentifierExtension* create() {
            return il2cpp::create_object<app::SubjectKeyIdentifierExtension>(get_class());
        }
    } // namespace SubjectKeyIdentifierExtension
} // namespace app::classes::types
