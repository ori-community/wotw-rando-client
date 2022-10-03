#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UI__Class** type_info;
        inline app::UI__Class* get_class() {
            return il2cpp::get_class<app::UI__Class>(type_info, "Game", "UI");
        }
        inline app::UI* create() {
            return il2cpp::create_object<app::UI>(get_class());
        }
    } // namespace UI
} // namespace app::classes::types
