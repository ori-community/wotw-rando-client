#pragma once
#include <Modloader/app/structs/AuthorityKeyIdentifierExtension.h>
#include <Modloader/app/structs/AuthorityKeyIdentifierExtension__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AuthorityKeyIdentifierExtension {
        inline app::AuthorityKeyIdentifierExtension__Class** type_info() {
            static app::AuthorityKeyIdentifierExtension__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AuthorityKeyIdentifierExtension__Class**)(modloader::win::memory::resolve_rva(0x04757900));
            }
            return cache;
        }
        inline app::AuthorityKeyIdentifierExtension__Class* get_class() {
            return il2cpp::get_class<app::AuthorityKeyIdentifierExtension__Class>(type_info(), "Mono.Security.X509.Extensions", "AuthorityKeyIdentifierExtension");
        }
        inline app::AuthorityKeyIdentifierExtension* create() {
            return il2cpp::create_object<app::AuthorityKeyIdentifierExtension>(get_class());
        }
    } // namespace AuthorityKeyIdentifierExtension
} // namespace app::classes::types
