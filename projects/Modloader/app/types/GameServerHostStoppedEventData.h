#pragma once
#include <Modloader/app/structs/GameServerHostStoppedEventData.h>
#include <Modloader/app/structs/GameServerHostStoppedEventData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GameServerHostStoppedEventData {
        inline app::GameServerHostStoppedEventData__Class** type_info() {
            static app::GameServerHostStoppedEventData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GameServerHostStoppedEventData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GameServerHostStoppedEventData__Class* get_class() {
            return il2cpp::get_class<app::GameServerHostStoppedEventData__Class>(type_info(), "PlayFab.PlayStreamModels", "GameServerHostStoppedEventData");
        }
        inline app::GameServerHostStoppedEventData* create() {
            return il2cpp::create_object<app::GameServerHostStoppedEventData>(get_class());
        }
    } // namespace GameServerHostStoppedEventData
} // namespace app::classes::types
