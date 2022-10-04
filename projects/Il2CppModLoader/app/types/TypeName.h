#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TypeName {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TypeName__Class** type_info;
        inline app::TypeName__Class* get_class() {
            return il2cpp::get_class<app::TypeName__Class>(type_info, "System", "TypeName");
        }
    } // namespace TypeName
} // namespace app::classes::types
