#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeName {
        inline app::TypeName__Class** type_info = (app::TypeName__Class**)(modloader::win::memory::resolve_rva(0x0478E7C0));
        inline app::TypeName__Class* get_class() {
            return il2cpp::get_class<app::TypeName__Class>(type_info, "System", "TypeName");
        }
    } // namespace TypeName
} // namespace app::classes::types
