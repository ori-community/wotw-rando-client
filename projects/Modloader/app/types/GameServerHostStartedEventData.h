#pragma once
#include <Modloader/app/structs/GameServerHostStartedEventData.h>
#include <Modloader/app/structs/GameServerHostStartedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameServerHostStartedEventData {
        inline app::GameServerHostStartedEventData__Class** type_info() {
            static app::GameServerHostStartedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameServerHostStartedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameServerHostStartedEventData__Class* get_class() {
            return il2cpp::get_class<app::GameServerHostStartedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GameServerHostStartedEventData");
        }
        inline app::GameServerHostStartedEventData* create() {
            return il2cpp::create_object<app::GameServerHostStartedEventData>(get_class());
        }
    } // namespace GameServerHostStartedEventData
} // namespace app::classes::types
