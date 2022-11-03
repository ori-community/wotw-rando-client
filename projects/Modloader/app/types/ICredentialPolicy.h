#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ICredentialPolicy {
        namespace {
            inline app::ICredentialPolicy__Class* type_info_ref = nullptr;
        }
        inline app::ICredentialPolicy__Class** type_info = &type_info_ref;
        inline app::ICredentialPolicy__Class* get_class() {
            return il2cpp::get_class<app::ICredentialPolicy__Class>(type_info, "System.Net", "ICredentialPolicy");
        }
    } // namespace ICredentialPolicy
} // namespace app::classes::types
