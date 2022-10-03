#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonColor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonColor__Class** type_info;
        inline app::MoonColor__Class* get_class() {
            return il2cpp::get_class<app::MoonColor__Class>(type_info, "Moon", "MoonColor");
        }
        inline app::MoonColor* create() {
            return il2cpp::create_object<app::MoonColor>(get_class());
        }
    } // namespace MoonColor
} // namespace app::classes::types
