#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonGizmos {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonGizmos__Class** type_info;
        inline app::MoonGizmos__Class* get_class() {
            return il2cpp::get_class<app::MoonGizmos__Class>(type_info, "Moon", "MoonGizmos");
        }
        inline app::MoonGizmos* create() {
            return il2cpp::create_object<app::MoonGizmos>(get_class());
        }
    } // namespace MoonGizmos
} // namespace app::classes::types
