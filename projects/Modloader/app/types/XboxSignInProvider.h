#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxSignInProvider__Class.h>
#include <Modloader/app/structs/XboxSignInProvider.h>

namespace app::classes::types {
    namespace XboxSignInProvider {
        inline app::XboxSignInProvider__Class** type_info = (app::XboxSignInProvider__Class**)(modloader::win::memory::resolve_rva(0x047616B0));
        inline app::XboxSignInProvider__Class* get_class() {
            return il2cpp::get_class<app::XboxSignInProvider__Class>(type_info, "SystemIntegration", "XboxSignInProvider");
        }
        inline app::XboxSignInProvider* create() {
            return il2cpp::create_object<app::XboxSignInProvider>(get_class());
        }
    } // namespace XboxSignInProvider
} // namespace app::classes::types
