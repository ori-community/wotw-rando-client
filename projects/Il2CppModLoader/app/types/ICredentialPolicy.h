#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICredentialPolicy {
        namespace {
            app::ICredentialPolicy__Class* type_info_ref = nullptr;
        }
        app::ICredentialPolicy__Class** type_info = &type_info_ref;
        inline app::ICredentialPolicy__Class* get_class() {
            return il2cpp::get_class<app::ICredentialPolicy__Class>(type_info, "System.Net", "ICredentialPolicy");
        }
    } // namespace ICredentialPolicy
} // namespace app::classes::types
