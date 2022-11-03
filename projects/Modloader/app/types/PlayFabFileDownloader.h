#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabFileDownloader {
        inline app::PlayFabFileDownloader__Class** type_info = (app::PlayFabFileDownloader__Class**)(modloader::win::memory::resolve_rva(0x047748B8));
        inline app::PlayFabFileDownloader__Class* get_class() {
            return il2cpp::get_class<app::PlayFabFileDownloader__Class>(type_info, "SystemIntegration.Races", "PlayFabFileDownloader");
        }
        inline app::PlayFabFileDownloader* create() {
            return il2cpp::create_object<app::PlayFabFileDownloader>(get_class());
        }
    } // namespace PlayFabFileDownloader
} // namespace app::classes::types
