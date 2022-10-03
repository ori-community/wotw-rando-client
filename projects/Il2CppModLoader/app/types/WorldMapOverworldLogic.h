#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldMapOverworldLogic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WorldMapOverworldLogic__Class** type_info;
        inline app::WorldMapOverworldLogic__Class* get_class() {
            return il2cpp::get_class<app::WorldMapOverworldLogic__Class>(type_info, "", "WorldMapOverworldLogic");
        }
        inline app::WorldMapOverworldLogic* create() {
            return il2cpp::create_object<app::WorldMapOverworldLogic>(get_class());
        }
    } // namespace WorldMapOverworldLogic
} // namespace app::classes::types
