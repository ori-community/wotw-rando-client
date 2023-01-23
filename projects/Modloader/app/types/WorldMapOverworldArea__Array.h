#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WorldMapOverworldArea__Array__Class.h>
#include <Modloader/app/structs/WorldMapOverworldArea__Array.h>

namespace app::classes::types {
    namespace WorldMapOverworldArea__Array {
        namespace {
            inline app::WorldMapOverworldArea__Array__Class* type_info_ref = nullptr;
        }
        inline app::WorldMapOverworldArea__Array__Class** type_info = &type_info_ref;
        inline app::WorldMapOverworldArea__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldMapOverworldArea__Array__Class>(type_info, "", "WorldMapOverworldArea[]");
        }
        inline app::WorldMapOverworldArea__Array* create() {
            return il2cpp::create_object<app::WorldMapOverworldArea__Array>(get_class());
        }
    } // namespace WorldMapOverworldArea__Array
} // namespace app::classes::types
