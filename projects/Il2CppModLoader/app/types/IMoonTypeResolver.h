#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonTypeResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoonTypeResolver__Class** type_info;
        inline app::IMoonTypeResolver__Class* get_class() {
            return il2cpp::get_class<app::IMoonTypeResolver__Class>(type_info, "Moon", "IMoonTypeResolver");
        }
    } // namespace IMoonTypeResolver
} // namespace app::classes::types
