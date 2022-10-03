#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonQuaternion {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonQuaternion__Class** type_info;
        inline app::MoonQuaternion__Class* get_class() {
            return il2cpp::get_class<app::MoonQuaternion__Class>(type_info, "Moon", "MoonQuaternion");
        }
        inline app::MoonQuaternion* create() {
            return il2cpp::create_object<app::MoonQuaternion>(get_class());
        }
    } // namespace MoonQuaternion
} // namespace app::classes::types
