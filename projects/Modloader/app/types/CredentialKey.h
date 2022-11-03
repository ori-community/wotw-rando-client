#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CredentialKey {
        inline app::CredentialKey__Class** type_info = (app::CredentialKey__Class**)(modloader::win::memory::resolve_rva(0x04782148));
        inline app::CredentialKey__Class* get_class() {
            return il2cpp::get_class<app::CredentialKey__Class>(type_info, "System.Net", "CredentialKey");
        }
        inline app::CredentialKey* create() {
            return il2cpp::create_object<app::CredentialKey>(get_class());
        }
    } // namespace CredentialKey
} // namespace app::classes::types
