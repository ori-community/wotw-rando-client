#pragma once
#include <Modloader/app/structs/PlayFabFileDownloader_c.h>
#include <Modloader/app/structs/PlayFabFileDownloader_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabFileDownloader_c {
        inline app::PlayFabFileDownloader_c__Class** type_info() {
            static app::PlayFabFileDownloader_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabFileDownloader_c__Class**)(modloader::win::memory::resolve_rva(0x0472C660));
            }
            return cache;
        }
        inline app::PlayFabFileDownloader_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabFileDownloader_c__Class>(type_info(), "SystemIntegration.Races", "PlayFabFileDownloader", "<>c");
        }
        inline app::PlayFabFileDownloader_c* create() {
            return il2cpp::create_object<app::PlayFabFileDownloader_c>(get_class());
        }
    } // namespace PlayFabFileDownloader_c
} // namespace app::classes::types
