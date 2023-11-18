#pragma once
#include <Modloader/app/structs/AkSpatialAudioInitSettings.h>
#include <Modloader/app/structs/AkSpatialAudioInitSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkSpatialAudioInitSettings {
        inline app::AkSpatialAudioInitSettings__Class** type_info() {
            static app::AkSpatialAudioInitSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkSpatialAudioInitSettings__Class**)(modloader::win::memory::resolve_rva(0x04781B88));
            }
            return cache;
        }
        inline app::AkSpatialAudioInitSettings__Class* get_class() {
            return il2cpp::get_class<app::AkSpatialAudioInitSettings__Class>(type_info(), "", "AkSpatialAudioInitSettings");
        }
        inline app::AkSpatialAudioInitSettings* create() {
            return il2cpp::create_object<app::AkSpatialAudioInitSettings>(get_class());
        }
    } // namespace AkSpatialAudioInitSettings
} // namespace app::classes::types
