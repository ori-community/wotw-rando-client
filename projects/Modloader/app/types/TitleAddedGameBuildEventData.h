#pragma once
#include <Modloader/app/structs/TitleAddedGameBuildEventData.h>
#include <Modloader/app/structs/TitleAddedGameBuildEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleAddedGameBuildEventData {
        inline app::TitleAddedGameBuildEventData__Class** type_info() {
            static app::TitleAddedGameBuildEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleAddedGameBuildEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleAddedGameBuildEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleAddedGameBuildEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "TitleAddedGameBuildEventData");
        }
        inline app::TitleAddedGameBuildEventData* create() {
            return il2cpp::create_object<app::TitleAddedGameBuildEventData>(get_class());
        }
    } // namespace TitleAddedGameBuildEventData
} // namespace app::classes::types
