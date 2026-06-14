#pragma once
#include <Modloader/app/structs/TitleMultiplayerServerEnabledStatus__Enum.h>
#include <Modloader/app/structs/TitleMultiplayerServerEnabledStatus__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleMultiplayerServerEnabledStatus__Enum {
        inline app::TitleMultiplayerServerEnabledStatus__Enum__Class** type_info() {
            static app::TitleMultiplayerServerEnabledStatus__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TitleMultiplayerServerEnabledStatus__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TitleMultiplayerServerEnabledStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TitleMultiplayerServerEnabledStatus__Enum__Class>(type_info(), "PlayFab.MultiplayerModels", "TitleMultiplayerServerEnabledStatus");
        }
        inline app::TitleMultiplayerServerEnabledStatus__Enum* create() {
            return il2cpp::create_object<app::TitleMultiplayerServerEnabledStatus__Enum>(get_class());
        }
    } // namespace TitleMultiplayerServerEnabledStatus__Enum
} // namespace app::classes::types
