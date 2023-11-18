#pragma once
#include <Modloader/app/structs/WorldMapOverworldLogic.h>
#include <Modloader/app/structs/WorldMapOverworldLogic__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldMapOverworldLogic {
        inline app::WorldMapOverworldLogic__Class** type_info() {
            static app::WorldMapOverworldLogic__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WorldMapOverworldLogic__Class**)(modloader::win::memory::resolve_rva(0x04726958));
            }
            return cache;
        }
        inline app::WorldMapOverworldLogic__Class* get_class() {
            return il2cpp::get_class<app::WorldMapOverworldLogic__Class>(type_info(), "", "WorldMapOverworldLogic");
        }
        inline app::WorldMapOverworldLogic* create() {
            return il2cpp::create_object<app::WorldMapOverworldLogic>(get_class());
        }
    } // namespace WorldMapOverworldLogic
} // namespace app::classes::types
