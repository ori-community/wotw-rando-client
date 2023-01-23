#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabFileUploader_c__Class.h>
#include <Modloader/app/structs/PlayFabFileUploader_c.h>

namespace app::classes::types {
    namespace PlayFabFileUploader_c {
        inline app::PlayFabFileUploader_c__Class** type_info = (app::PlayFabFileUploader_c__Class**)(modloader::win::memory::resolve_rva(0x0472ACF8));
        inline app::PlayFabFileUploader_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlayFabFileUploader_c__Class>(type_info, "SystemIntegration.Races", "PlayFabFileUploader", "<>c");
        }
        inline app::PlayFabFileUploader_c* create() {
            return il2cpp::create_object<app::PlayFabFileUploader_c>(get_class());
        }
    } // namespace PlayFabFileUploader_c
} // namespace app::classes::types
