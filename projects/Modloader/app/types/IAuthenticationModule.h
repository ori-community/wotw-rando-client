#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IAuthenticationModule__Class.h>

namespace app::classes::types {
    namespace IAuthenticationModule {
        inline app::IAuthenticationModule__Class** type_info = (app::IAuthenticationModule__Class**)(modloader::win::memory::resolve_rva(0x047682F8));
        inline app::IAuthenticationModule__Class* get_class() {
            return il2cpp::get_class<app::IAuthenticationModule__Class>(type_info, "System.Net", "IAuthenticationModule");
        }
    } // namespace IAuthenticationModule
} // namespace app::classes::types
