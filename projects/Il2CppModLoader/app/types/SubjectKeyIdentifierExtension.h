#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SubjectKeyIdentifierExtension {
        inline app::SubjectKeyIdentifierExtension__Class** type_info = (app::SubjectKeyIdentifierExtension__Class**)(modloader::win::memory::resolve_rva(0x04738360));
        inline app::SubjectKeyIdentifierExtension__Class* get_class() {
            return il2cpp::get_class<app::SubjectKeyIdentifierExtension__Class>(type_info, "Mono.Security.X509.Extensions", "SubjectKeyIdentifierExtension");
        }
        inline app::SubjectKeyIdentifierExtension* create() {
            return il2cpp::create_object<app::SubjectKeyIdentifierExtension>(get_class());
        }
    } // namespace SubjectKeyIdentifierExtension
} // namespace app::classes::types
