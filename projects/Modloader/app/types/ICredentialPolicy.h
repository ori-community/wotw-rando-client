#pragma once
#include <Modloader/app/structs/ICredentialPolicy.h>
#include <Modloader/app/structs/ICredentialPolicy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ICredentialPolicy {
        inline app::ICredentialPolicy__Class** type_info() {
            static app::ICredentialPolicy__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ICredentialPolicy__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ICredentialPolicy__Class* get_class() {
            return il2cpp::get_class<app::ICredentialPolicy__Class>(type_info(), "System.Net", "ICredentialPolicy");
        }
    } // namespace ICredentialPolicy
} // namespace app::classes::types
