#pragma once
#include <Modloader/app/structs/ProjectilesStickToThisPlatform.h>
#include <Modloader/app/structs/ProjectilesStickToThisPlatform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProjectilesStickToThisPlatform {
        inline app::ProjectilesStickToThisPlatform__Class** type_info() {
            static app::ProjectilesStickToThisPlatform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProjectilesStickToThisPlatform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProjectilesStickToThisPlatform__Class* get_class() {
            return il2cpp::get_class<app::ProjectilesStickToThisPlatform__Class>(type_info(), "", "ProjectilesStickToThisPlatform");
        }
        inline app::ProjectilesStickToThisPlatform* create() {
            return il2cpp::create_object<app::ProjectilesStickToThisPlatform>(get_class());
        }
    } // namespace ProjectilesStickToThisPlatform
} // namespace app::classes::types
