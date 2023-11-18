#pragma once
#include <Modloader/app/structs/CredentialKey.h>
#include <Modloader/app/structs/CredentialKey__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CredentialKey {
        inline app::CredentialKey__Class** type_info() {
            static app::CredentialKey__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CredentialKey__Class**)(modloader::win::memory::resolve_rva(0x04782148));
            }
            return cache;
        }
        inline app::CredentialKey__Class* get_class() {
            return il2cpp::get_class<app::CredentialKey__Class>(type_info(), "System.Net", "CredentialKey");
        }
        inline app::CredentialKey* create() {
            return il2cpp::create_object<app::CredentialKey>(get_class());
        }
    } // namespace CredentialKey
} // namespace app::classes::types
