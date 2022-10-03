#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GardenerScreen {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GardenerScreen__Class** type_info;
        inline app::GardenerScreen__Class* get_class() {
            return il2cpp::get_class<app::GardenerScreen__Class>(type_info, "", "GardenerScreen");
        }
        inline app::GardenerScreen* create() {
            return il2cpp::create_object<app::GardenerScreen>(get_class());
        }
    } // namespace GardenerScreen
} // namespace app::classes::types
