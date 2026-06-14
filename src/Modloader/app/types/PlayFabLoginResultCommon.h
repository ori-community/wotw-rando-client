#pragma once
#include <Modloader/app/structs/PlayFabLoginResultCommon.h>
#include <Modloader/app/structs/PlayFabLoginResultCommon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabLoginResultCommon {
        inline app::PlayFabLoginResultCommon__Class** type_info() {
            static app::PlayFabLoginResultCommon__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PlayFabLoginResultCommon__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PlayFabLoginResultCommon__Class* get_class() {
            return il2cpp::get_class<app::PlayFabLoginResultCommon__Class>(type_info(), "PlayFab.SharedModels", "PlayFabLoginResultCommon");
        }
        inline app::PlayFabLoginResultCommon* create() {
            return il2cpp::create_object<app::PlayFabLoginResultCommon>(get_class());
        }
    } // namespace PlayFabLoginResultCommon
} // namespace app::classes::types
