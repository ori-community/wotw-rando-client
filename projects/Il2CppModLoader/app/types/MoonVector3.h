#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonVector3 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonVector3__Class** type_info;
        inline app::MoonVector3__Class* get_class() {
            return il2cpp::get_class<app::MoonVector3__Class>(type_info, "Moon", "MoonVector3");
        }
        inline app::MoonVector3* create() {
            return il2cpp::create_object<app::MoonVector3>(get_class());
        }
    } // namespace MoonVector3
} // namespace app::classes::types
