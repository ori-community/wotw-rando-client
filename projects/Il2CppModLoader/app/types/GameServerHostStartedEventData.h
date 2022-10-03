#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GameServerHostStartedEventData {
        namespace {
            app::GameServerHostStartedEventData__Class* type_info_ref = nullptr;
        }
        app::GameServerHostStartedEventData__Class** type_info = &type_info_ref;
        inline app::GameServerHostStartedEventData__Class* get_class() {
            return il2cpp::get_class<app::GameServerHostStartedEventData__Class>(type_info, "PlayFab.PlayStreamModels", "GameServerHostStartedEventData");
        }
        inline app::GameServerHostStartedEventData* create() {
            return il2cpp::create_object<app::GameServerHostStartedEventData>(get_class());
        }
    } // namespace GameServerHostStartedEventData
} // namespace app::classes::types
