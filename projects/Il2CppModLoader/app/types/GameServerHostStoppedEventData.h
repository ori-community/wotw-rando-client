#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameServerHostStoppedEventData {
        namespace {
            app::GameServerHostStoppedEventData__Class* type_info_ref = nullptr;
        }
        app::GameServerHostStoppedEventData__Class** type_info = &type_info_ref;
        inline app::GameServerHostStoppedEventData__Class* get_class() {
            return il2cpp::get_class<app::GameServerHostStoppedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GameServerHostStoppedEventData");
        }
        inline app::GameServerHostStoppedEventData* create() {
            return il2cpp::create_object<app::GameServerHostStoppedEventData>(get_class());
        }
    } // namespace GameServerHostStoppedEventData
} // namespace app::classes::types
