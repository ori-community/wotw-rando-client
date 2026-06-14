#pragma once
#include <Modloader/app/structs/LegacyDiscoverWorldMapAreasAction.h>
#include <Modloader/app/structs/LegacyDiscoverWorldMapAreasAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyDiscoverWorldMapAreasAction {
        inline app::LegacyDiscoverWorldMapAreasAction__Class** type_info() {
            static app::LegacyDiscoverWorldMapAreasAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LegacyDiscoverWorldMapAreasAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LegacyDiscoverWorldMapAreasAction__Class* get_class() {
            return il2cpp::get_class<app::LegacyDiscoverWorldMapAreasAction__Class>(type_info(), "", "LegacyDiscoverWorldMapAreasAction");
        }
        inline app::LegacyDiscoverWorldMapAreasAction* create() {
            return il2cpp::create_object<app::LegacyDiscoverWorldMapAreasAction>(get_class());
        }
    } // namespace LegacyDiscoverWorldMapAreasAction
} // namespace app::classes::types
