#pragma once
#include <Modloader/app/structs/CredentialHostKey.h>
#include <Modloader/app/structs/CredentialHostKey__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CredentialHostKey {
        inline app::CredentialHostKey__Class** type_info() {
            static app::CredentialHostKey__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CredentialHostKey__Class**)(modloader::win::memory::resolve_rva(0x0472A9D0));
            }
            return cache;
        }
        inline app::CredentialHostKey__Class* get_class() {
            return il2cpp::get_class<app::CredentialHostKey__Class>(type_info(), "System.Net", "CredentialHostKey");
        }
        inline app::CredentialHostKey* create() {
            return il2cpp::create_object<app::CredentialHostKey>(get_class());
        }
    } // namespace CredentialHostKey
} // namespace app::classes::types
