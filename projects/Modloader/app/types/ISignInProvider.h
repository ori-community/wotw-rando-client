#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISignInProvider {
        inline app::ISignInProvider__Class** type_info = (app::ISignInProvider__Class**)(modloader::win::memory::resolve_rva(0x0475EC98));
        inline app::ISignInProvider__Class* get_class() {
            return il2cpp::get_class<app::ISignInProvider__Class>(type_info, "SystemIntegration", "ISignInProvider");
        }
    } // namespace ISignInProvider
} // namespace app::classes::types
