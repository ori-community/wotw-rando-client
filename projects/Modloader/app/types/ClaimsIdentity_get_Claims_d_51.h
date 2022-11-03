#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClaimsIdentity_get_Claims_d_51 {
        inline app::ClaimsIdentity_get_Claims_d_51__Class** type_info = (app::ClaimsIdentity_get_Claims_d_51__Class**)(modloader::win::memory::resolve_rva(0x0475EDA0));
        inline app::ClaimsIdentity_get_Claims_d_51__Class* get_class() {
            return il2cpp::get_nested_class<app::ClaimsIdentity_get_Claims_d_51__Class>(type_info, "System.Security.Claims", "ClaimsIdentity", "<get_Claims>d__51");
        }
        inline app::ClaimsIdentity_get_Claims_d_51* create() {
            return il2cpp::create_object<app::ClaimsIdentity_get_Claims_d_51>(get_class());
        }
    } // namespace ClaimsIdentity_get_Claims_d_51
} // namespace app::classes::types
