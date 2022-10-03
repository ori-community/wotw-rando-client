#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UI_Hints {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UI_Hints__Class** type_info;
        inline app::UI_Hints__Class* get_class() {
            return il2cpp::get_nested_class<app::UI_Hints__Class>(type_info, "Game", "UI", "Hints");
        }
        inline app::UI_Hints* create() {
            return il2cpp::create_object<app::UI_Hints>(get_class());
        }
    } // namespace UI_Hints
} // namespace app::classes::types
