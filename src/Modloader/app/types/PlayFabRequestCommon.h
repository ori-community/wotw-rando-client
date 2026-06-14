#pragma once
#include <Modloader/app/structs/PlayFabRequestCommon.h>
#include <Modloader/app/structs/PlayFabRequestCommon__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabRequestCommon {
        inline app::PlayFabRequestCommon__Class** type_info() {
            static app::PlayFabRequestCommon__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabRequestCommon__Class**)(modloader::win::memory::resolve_rva(0x0474CD90));
            }
            return cache;
        }
        inline app::PlayFabRequestCommon__Class* get_class() {
            return il2cpp::get_class<app::PlayFabRequestCommon__Class>(type_info(), "PlayFab.SharedModels", "PlayFabRequestCommon");
        }
        inline app::PlayFabRequestCommon* create() {
            return il2cpp::create_object<app::PlayFabRequestCommon>(get_class());
        }
    } // namespace PlayFabRequestCommon
} // namespace app::classes::types
