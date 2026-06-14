#pragma once
#include <Modloader/app/structs/PlayFabFileUploader.h>
#include <Modloader/app/structs/PlayFabFileUploader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayFabFileUploader {
        inline app::PlayFabFileUploader__Class** type_info() {
            static app::PlayFabFileUploader__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayFabFileUploader__Class**)(modloader::win::memory::resolve_rva(0x0478DDF8));
            }
            return cache;
        }
        inline app::PlayFabFileUploader__Class* get_class() {
            return il2cpp::get_class<app::PlayFabFileUploader__Class>(type_info(), "SystemIntegration.Races", "PlayFabFileUploader");
        }
        inline app::PlayFabFileUploader* create() {
            return il2cpp::create_object<app::PlayFabFileUploader>(get_class());
        }
    } // namespace PlayFabFileUploader
} // namespace app::classes::types
