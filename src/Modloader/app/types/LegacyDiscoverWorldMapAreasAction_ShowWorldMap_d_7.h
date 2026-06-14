#pragma once
#include <Modloader/app/structs/LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7.h>
#include <Modloader/app/structs/LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7 {
        inline app::LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__Class** type_info() {
            static app::LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__Class**)(modloader::win::memory::resolve_rva(0x0475FF20));
            }
            return cache;
        }
        inline app::LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__Class* get_class() {
            return il2cpp::get_nested_class<app::LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__Class>(type_info(), "", "LegacyDiscoverWorldMapAreasAction", "<ShowWorldMap>d__7");
        }
        inline app::LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7* create() {
            return il2cpp::create_object<app::LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7>(get_class());
        }
    } // namespace LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7
} // namespace app::classes::types
