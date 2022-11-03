#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabFileDownloader_c {
        inline app::PlayFabFileDownloader_c__Class** type_info = (app::PlayFabFileDownloader_c__Class**)(modloader::win::memory::resolve_rva(0x0472C660));
        inline app::PlayFabFileDownloader_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabFileDownloader_c__Class>(type_info, "SystemIntegration.Races", "PlayFabFileDownloader", "<>c");
        }
        inline app::PlayFabFileDownloader_c* create() {
            return il2cpp::create_object<app::PlayFabFileDownloader_c>(get_class());
        }
    } // namespace PlayFabFileDownloader_c
} // namespace app::classes::types
