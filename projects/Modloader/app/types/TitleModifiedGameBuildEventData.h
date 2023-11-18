#pragma once
#include <Modloader/app/structs/TitleModifiedGameBuildEventData.h>
#include <Modloader/app/structs/TitleModifiedGameBuildEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleModifiedGameBuildEventData {
        inline app::TitleModifiedGameBuildEventData__Class** type_info() {
            static app::TitleModifiedGameBuildEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleModifiedGameBuildEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleModifiedGameBuildEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleModifiedGameBuildEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleModifiedGameBuildEventData");
        }
        inline app::TitleModifiedGameBuildEventData* create() {
            return il2cpp::create_object<app::TitleModifiedGameBuildEventData>(get_class());
        }
    } // namespace TitleModifiedGameBuildEventData
} // namespace app::classes::types
