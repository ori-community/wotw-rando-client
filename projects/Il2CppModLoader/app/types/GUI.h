#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GUI__Class** type_info;
        inline app::GUI__Class* get_class() {
            return il2cpp::get_class<app::GUI__Class>(type_info, "UnityEngine", "GUI");
        }
        inline app::GUI* create() {
            return il2cpp::create_object<app::GUI>(get_class());
        }
    } // namespace GUI
} // namespace app::classes::types
