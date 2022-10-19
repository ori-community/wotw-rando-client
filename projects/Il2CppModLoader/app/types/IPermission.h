#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IPermission {
        inline app::IPermission__Class** type_info = (app::IPermission__Class**)(modloader::win::memory::resolve_rva(0x04707CF0));
        inline app::IPermission__Class* get_class() {
            return il2cpp::get_class<app::IPermission__Class>(type_info, "System.Security", "IPermission");
        }
    } // namespace IPermission
} // namespace app::classes::types
