#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GrdkSignInProvider {
        inline app::GrdkSignInProvider__Class** type_info = (app::GrdkSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x0470F4C0));
        inline app::GrdkSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::GrdkSignInProvider__Class>(type_info, "SystemIntegration", "GrdkSignInProvider");
        }
        inline app::GrdkSignInProvider* create() {
            return il2cpp::create_object<app::GrdkSignInProvider>(get_class());
        }
    } // namespace GrdkSignInProvider
} // namespace app::classes::types
