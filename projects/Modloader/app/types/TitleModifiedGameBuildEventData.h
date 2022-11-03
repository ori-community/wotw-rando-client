#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleModifiedGameBuildEventData {
        namespace {
            inline app::TitleModifiedGameBuildEventData__Class* type_info_ref = nullptr;
        }
        inline app::TitleModifiedGameBuildEventData__Class** type_info = &type_info_ref;
        inline app::TitleModifiedGameBuildEventData__Class* get_class() {
            return il2cpp::get_class<app::TitleModifiedGameBuildEventData__Class>(type_info, "PlayFab.PlayStreamModels", "TitleModifiedGameBuildEventData");
        }
        inline app::TitleModifiedGameBuildEventData* create() {
            return il2cpp::create_object<app::TitleModifiedGameBuildEventData>(get_class());
        }
    } // namespace TitleModifiedGameBuildEventData
} // namespace app::classes::types
