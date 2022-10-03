#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldMapLogic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WorldMapLogic__Class** type_info;
        inline app::WorldMapLogic__Class* get_class() {
            return il2cpp::get_class<app::WorldMapLogic__Class>(type_info, "", "WorldMapLogic");
        }
        inline app::WorldMapLogic* create() {
            return il2cpp::create_object<app::WorldMapLogic>(get_class());
        }
    } // namespace WorldMapLogic
} // namespace app::classes::types
