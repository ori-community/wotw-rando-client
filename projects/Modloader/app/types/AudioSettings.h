#pragma once
#include <Modloader/app/structs/AudioSettings.h>
#include <Modloader/app/structs/AudioSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AudioSettings {
        inline app::AudioSettings__Class** type_info() {
            static app::AudioSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AudioSettings__Class**)(modloader::win::memory::resolve_rva(0x0472FE88));
            }
            return cache;
        }
        inline app::AudioSettings__Class* get_class() {
            return il2cpp::get_class<app::AudioSettings__Class>(type_info(), "UnityEngine", "AudioSettings");
        }
        inline app::AudioSettings* create() {
            return il2cpp::create_object<app::AudioSettings>(get_class());
        }
    } // namespace AudioSettings
} // namespace app::classes::types
