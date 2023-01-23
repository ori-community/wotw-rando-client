#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WorldMapOverworldLogic__Class.h>
#include <Modloader/app/structs/WorldMapOverworldLogic.h>

namespace app::classes::types {
    namespace WorldMapOverworldLogic {
        inline app::WorldMapOverworldLogic__Class** type_info = (app::WorldMapOverworldLogic__Class**)(modloader::win::memory::resolve_rva(0x04726958));
        inline app::WorldMapOverworldLogic__Class* get_class() {
            return il2cpp::get_class<app::WorldMapOverworldLogic__Class>(type_info, "", "WorldMapOverworldLogic");
        }
        inline app::WorldMapOverworldLogic* create() {
            return il2cpp::create_object<app::WorldMapOverworldLogic>(get_class());
        }
    } // namespace WorldMapOverworldLogic
} // namespace app::classes::types
