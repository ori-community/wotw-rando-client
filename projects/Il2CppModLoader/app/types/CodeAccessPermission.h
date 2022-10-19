#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CodeAccessPermission {
        inline app::CodeAccessPermission__Class** type_info = (app::CodeAccessPermission__Class**)(modloader::win::memory::resolve_rva(0x0477E740));
        inline app::CodeAccessPermission__Class* get_class() {
            return il2cpp::get_class<app::CodeAccessPermission__Class>(type_info, "System.Security", "CodeAccessPermission");
        }
        inline app::CodeAccessPermission* create() {
            return il2cpp::create_object<app::CodeAccessPermission>(get_class());
        }
    } // namespace CodeAccessPermission
} // namespace app::classes::types
