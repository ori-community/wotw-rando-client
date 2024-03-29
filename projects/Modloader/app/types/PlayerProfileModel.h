#pragma once
#include <Modloader/app/structs/PlayerProfileModel.h>
#include <Modloader/app/structs/PlayerProfileModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayerProfileModel {
        inline app::PlayerProfileModel__Class** type_info() {
            static app::PlayerProfileModel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayerProfileModel__Class**)(modloader::win::memory::resolve_rva(0x04739D78));
            }
            return cache;
        }
        inline app::PlayerProfileModel__Class* get_class() {
            return il2cpp::get_class<app::PlayerProfileModel__Class>(type_info(), "PlayFab.ClientModels", "PlayerProfileModel");
        }
        inline app::PlayerProfileModel* create() {
            return il2cpp::create_object<app::PlayerProfileModel>(get_class());
        }
    } // namespace PlayerProfileModel
} // namespace app::classes::types
