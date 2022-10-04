#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonTypeResolveGetter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoonTypeResolveGetter__Class** type_info;
        inline app::IMoonTypeResolveGetter__Class* get_class() {
            return il2cpp::get_class<app::IMoonTypeResolveGetter__Class>(type_info, "Moon", "IMoonTypeResolveGetter");
        }
    } // namespace IMoonTypeResolveGetter
} // namespace app::classes::types
