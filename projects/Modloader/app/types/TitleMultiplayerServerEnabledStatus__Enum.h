#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TitleMultiplayerServerEnabledStatus__Enum {
        namespace {
            inline app::TitleMultiplayerServerEnabledStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::TitleMultiplayerServerEnabledStatus__Enum__Class** type_info = &type_info_ref;
        inline app::TitleMultiplayerServerEnabledStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::TitleMultiplayerServerEnabledStatus__Enum__Class>(type_info, "PlayFab.MultiplayerModels", "TitleMultiplayerServerEnabledStatus");
        }
        inline app::TitleMultiplayerServerEnabledStatus__Enum* create() {
            return il2cpp::create_object<app::TitleMultiplayerServerEnabledStatus__Enum>(get_class());
        }
    } // namespace TitleMultiplayerServerEnabledStatus__Enum
} // namespace app::classes::types
