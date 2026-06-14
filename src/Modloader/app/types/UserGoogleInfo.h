#pragma once
#include <Modloader/app/structs/UserGoogleInfo.h>
#include <Modloader/app/structs/UserGoogleInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UserGoogleInfo {
        inline app::UserGoogleInfo__Class** type_info() {
            static app::UserGoogleInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UserGoogleInfo__Class**)(modloader::win::memory::resolve_rva(0x047829D0));
            }
            return cache;
        }
        inline app::UserGoogleInfo__Class* get_class() {
            return il2cpp::get_class<app::UserGoogleInfo__Class>(type_info(), "PlayFab.ClientModels", "UserGoogleInfo");
        }
        inline app::UserGoogleInfo* create() {
            return il2cpp::create_object<app::UserGoogleInfo>(get_class());
        }
    } // namespace UserGoogleInfo
} // namespace app::classes::types
