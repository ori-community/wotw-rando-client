#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldMapOverworldArea {
        namespace {
            app::WorldMapOverworldArea__Class* type_info_ref = nullptr;
        }
        app::WorldMapOverworldArea__Class** type_info = &type_info_ref;
        inline app::WorldMapOverworldArea__Class* get_class() {
            return il2cpp::get_class<app::WorldMapOverworldArea__Class>(type_info, "", "WorldMapOverworldArea");
        }
        inline app::WorldMapOverworldArea* create() {
            return il2cpp::create_object<app::WorldMapOverworldArea>(get_class());
        }
        inline app::WorldMapOverworldArea__Array* create_array(int size) {
            return il2cpp::array_new<app::WorldMapOverworldArea__Array>(get_class(), size);
        }
        inline app::WorldMapOverworldArea__Array* create_array(const std::vector<app::WorldMapOverworldArea*>& items) {
            return il2cpp::array_new<app::WorldMapOverworldArea__Array>(get_class(), items);
        }
    } // namespace WorldMapOverworldArea
} // namespace app::classes::types
