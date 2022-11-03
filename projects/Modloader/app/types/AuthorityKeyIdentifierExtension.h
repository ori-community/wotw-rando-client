#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AuthorityKeyIdentifierExtension {
        inline app::AuthorityKeyIdentifierExtension__Class** type_info = (app::AuthorityKeyIdentifierExtension__Class**)(modloader::win::memory::resolve_rva(0x04757900));
        inline app::AuthorityKeyIdentifierExtension__Class* get_class() {
            return il2cpp::get_class<app::AuthorityKeyIdentifierExtension__Class>(type_info, "Mono.Security.X509.Extensions", "AuthorityKeyIdentifierExtension");
        }
        inline app::AuthorityKeyIdentifierExtension* create() {
            return il2cpp::create_object<app::AuthorityKeyIdentifierExtension>(get_class());
        }
    } // namespace AuthorityKeyIdentifierExtension
} // namespace app::classes::types
