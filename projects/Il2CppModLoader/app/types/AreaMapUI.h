#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AreaMapUI__Class** type_info;
        inline app::AreaMapUI__Class* get_class() {
            return il2cpp::get_class<app::AreaMapUI__Class>(type_info, "", "AreaMapUI");
        }
        inline app::AreaMapUI* create() {
            return il2cpp::create_object<app::AreaMapUI>(get_class());
        }
    } // namespace AreaMapUI
} // namespace app::classes::types
