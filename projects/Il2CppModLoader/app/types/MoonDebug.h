#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonDebug {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonDebug__Class** type_info;
        inline app::MoonDebug__Class* get_class() {
            return il2cpp::get_class<app::MoonDebug__Class>(type_info, "Moon", "MoonDebug");
        }
        inline app::MoonDebug* create() {
            return il2cpp::create_object<app::MoonDebug>(get_class());
        }
    } // namespace MoonDebug
} // namespace app::classes::types
