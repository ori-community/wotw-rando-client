#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClaimsPrincipal {
        inline app::ClaimsPrincipal__Class** type_info = (app::ClaimsPrincipal__Class**)(modloader::win::memory::resolve_rva(0x04723C48));
        inline app::ClaimsPrincipal__Class* get_class() {
            return il2cpp::get_class<app::ClaimsPrincipal__Class>(type_info, "System.Security.Claims", "ClaimsPrincipal");
        }
        inline app::ClaimsPrincipal* create() {
            return il2cpp::create_object<app::ClaimsPrincipal>(get_class());
        }
    } // namespace ClaimsPrincipal
} // namespace app::classes::types
