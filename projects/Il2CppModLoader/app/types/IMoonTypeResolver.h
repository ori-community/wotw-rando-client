#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IMoonTypeResolver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IMoonTypeResolver__Class** type_info;
        inline app::IMoonTypeResolver__Class* get_class() {
            return il2cpp::get_class<app::IMoonTypeResolver__Class>(type_info, "Moon", "IMoonTypeResolver");
        }
        inline app::IMoonTypeResolver* create() {
            return il2cpp::create_object<app::IMoonTypeResolver>(get_class());
        }
    } // namespace IMoonTypeResolver
} // namespace app::classes::types
