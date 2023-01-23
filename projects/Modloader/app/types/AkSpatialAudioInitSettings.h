#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkSpatialAudioInitSettings__Class.h>
#include <Modloader/app/structs/AkSpatialAudioInitSettings.h>

namespace app::classes::types {
    namespace AkSpatialAudioInitSettings {
        inline app::AkSpatialAudioInitSettings__Class** type_info = (app::AkSpatialAudioInitSettings__Class**)(modloader::win::memory::resolve_rva(0x04781B88));
        inline app::AkSpatialAudioInitSettings__Class* get_class() {
            return il2cpp::get_class<app::AkSpatialAudioInitSettings__Class>(type_info, "", "AkSpatialAudioInitSettings");
        }
        inline app::AkSpatialAudioInitSettings* create() {
            return il2cpp::create_object<app::AkSpatialAudioInitSettings>(get_class());
        }
    } // namespace AkSpatialAudioInitSettings
} // namespace app::classes::types
