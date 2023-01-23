#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UserGoogleInfo__Class.h>
#include <Modloader/app/structs/UserGoogleInfo.h>

namespace app::classes::types {
    namespace UserGoogleInfo {
        inline app::UserGoogleInfo__Class** type_info = (app::UserGoogleInfo__Class**)(modloader::win::memory::resolve_rva(0x047829D0));
        inline app::UserGoogleInfo__Class* get_class() {
            return il2cpp::get_class<app::UserGoogleInfo__Class>(type_info, "PlayFab.ClientModels", "UserGoogleInfo");
        }
        inline app::UserGoogleInfo* create() {
            return il2cpp::create_object<app::UserGoogleInfo>(get_class());
        }
    } // namespace UserGoogleInfo
} // namespace app::classes::types
