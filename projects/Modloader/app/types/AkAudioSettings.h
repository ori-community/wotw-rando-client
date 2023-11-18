#pragma once
#include <Modloader/app/structs/AkAudioSettings.h>
#include <Modloader/app/structs/AkAudioSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkAudioSettings {
        inline app::AkAudioSettings__Class** type_info() {
            static app::AkAudioSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkAudioSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkAudioSettings__Class* get_class() {
            return il2cpp::get_class<app::AkAudioSettings__Class>(type_info(), "", "AkAudioSettings");
        }
        inline app::AkAudioSettings* create() {
            return il2cpp::create_object<app::AkAudioSettings>(get_class());
        }
    } // namespace AkAudioSettings
} // namespace app::classes::types
