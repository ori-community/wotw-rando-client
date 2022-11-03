#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabServerAPI {
        inline app::PlayFabServerAPI__Class** type_info = (app::PlayFabServerAPI__Class**)(modloader::win::memory::resolve_rva(0x04722760));
        inline app::PlayFabServerAPI__Class* get_class() {
            return il2cpp::get_class<app::PlayFabServerAPI__Class>(type_info, "PlayFab", "PlayFabServerAPI");
        }
        inline app::PlayFabServerAPI* create() {
            return il2cpp::create_object<app::PlayFabServerAPI>(get_class());
        }
    } // namespace PlayFabServerAPI
} // namespace app::classes::types
